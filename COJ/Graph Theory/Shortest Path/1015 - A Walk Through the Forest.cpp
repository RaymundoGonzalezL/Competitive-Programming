#include <bits/stdc++.h>
#define MAXN 1005
using namespace std;
typedef long long ll;
const ll INF = (ll)1e30;
typedef pair<int,int> ii;
ll M[MAXN][MAXN];
ll dist[MAXN];
int caminos[MAXN];
bool visitado[MAXN];
int N,m;
int u,v,w;
void dijkstra(int S){
    for(int i=0;i<N;i++) dist[i] = INF;
    priority_queue<ii, vector<ii>, greater<ii> > pq;
    pq.push({0, S});
    dist[S] = 0;
    while(!pq.empty()){
        ii x = pq.top(); pq.pop();
        int u = x.second, w = x.first;
        if(w > dist[u]) continue;
        for(int i=0;i<N;i++){
            if(i != u){
                if(M[u][i] &&dist[u] + M[u][i] < dist[i]){
                    dist[i] = dist[u] + M[u][i];
                    pq.push({dist[i], i});
                }
            }
        }
    }
}
void dfs(int u, ll d){
    for(int i=0;i<N;i++){
        if(M[u][i] && !visitado[i] && dist[i] < d){
            if(i != 1){
                visitado[i] = 1;
                if(!caminos[i]) dfs(i, dist[i]);
                caminos[u]+= caminos[i];
                visitado[i] = 0;
            }else caminos[u]++;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    while(cin >> N && N){
        memset(M,0,sizeof M);
        for(int i=0;i<N;i++) caminos[i] = visitado[i] = 0;
        cin >> m;
        for(int i=0;i<m;i++){
            cin >> u >> v >> w;
            --u, --v;
            if(M[u][v] == 0 || M[u][v] > w) M[u][v] = M[v][u] = w;
        }
        dijkstra(1);
        dfs(0, dist[0]);
        cout << caminos[0] << "\n";
    }
}
