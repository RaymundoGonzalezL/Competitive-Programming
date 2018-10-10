#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long ll;
ll memo[10005][10005];

ll solve(ll N, ll D){
    if(N == 0) return 1;
    if(N < 0) return 0;
    if(N > 0  && D == 0) return 0;
    if(memo[N][D] != -1) return memo[N][D];
    return memo[N][D] = (solve(N - D, D) + solve(N, D - 1))%MOD;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int N;
    memset(memo, -1, sizeof memo);
    while(cin >> N){

        cout << solve(N, N) << "\n";
    }
}
