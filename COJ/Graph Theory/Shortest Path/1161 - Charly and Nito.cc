#include <bits/stdc++.h>
#define MAXN 5005
#define INF 1000000
using namespace std;
typedef pair<int,int> ii;
typedef vector<ii> vii;
vector<vii> adjList;
int distB[MAXN], distC[MAXN], distN[MAXN];
int J,B,C,N,S;
int u,v,w;
void dijkstra(int S, int *dist){
    for(int i=0;i<J;i++) dist[i] = INF;
    priority_queue<ii, vii, greater<ii> > pq;
    dist[S] = 0;
    pq.push({0, S});
    while(!pq.empty()){
        ii p = pq.top(); pq.pop();
        int d = p.first;
        int u = p.second;
        if(d > dist[u]) continue;
        for(auto i : adjList[u]){
            if(dist[u] + i.second < dist[i.first]){
                dist[i.first] = dist[u] + i.second;
                pq.push({dist[i.first], i.first});
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    while(cin >> J >> B >> C >> N >> S && J != -1 && B != -1 && C != -1 && N != -1 && S != -1){
        adjList.assign(J, vii());
        for(int i=0;i<S;i++){
            cin >> u >> v >> w;
            --u, --v;
            adjList[u].push_back({v,w});
            adjList[v].push_back({u,w});
        }
        --N,--C,--B;
        dijkstra(B, distB);
        dijkstra(C, distC);
        dijkstra(N, distN);
        int maxi = 0, mi = -1;
        for(int i=0;i<J;i++){
            if(i != B && maxi < distB[i]){
                if((distB[C] == distB[i] + distC[i]) && (distB[N]  == distB[i] + distN[i])){
                    maxi = distB[i];
                    mi = i;
                }
            }
        }
        cout << maxi << " " << distC[(mi != -1) ? mi : B] << " " << distN[(mi != -1) ? mi : B] << "\n";
    }
}
