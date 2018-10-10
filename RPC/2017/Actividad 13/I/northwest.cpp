#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<int,ll> A,B;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    cout.precision(8);
    ll N;
    int x,y;
    while(cin >> N){
        A.clear(); B.clear();
        for(int i=0;i<N;i++){
            cin >> x >> y;
            A[x+y]++;
            B[x-y]++;
        }
        double r = 0;
        for(auto v : A) r+= (v.second * (v.second - 1));
        for(auto v : B) r+= (v.second * (v.second - 1));
        cout << r / (N * N) << "\n";
    }
}
