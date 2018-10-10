#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#define T1 first
#define T2 second
#define FOR(x,i,c,n) for(x=i;x<c;x+=n)
using namespace std;
vector<pair<int,int> > personas;
bool comparador(pair<int,int> a,pair<int,int> b){
    return a.T2 > b.T2;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int casos,n;
    int s,t=0,x;
    cin >> casos;
    while(casos--){
        cin >> n;
        s = t = 0;
        personas.clear();
        personas.resize(n);
        FOR(x,0,n,1) cin >> personas[x].T1 >> personas[x].T2;
        sort(personas.begin(),personas.end(),comparador);
        FOR(x,0,n,1){
            s+= personas[x].T1;
            t = max(t, s+personas[x].T2);
        }
        cout << t << "\n";
    }
}