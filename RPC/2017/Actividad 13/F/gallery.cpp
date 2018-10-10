#include <bits/stdc++.h>
#define MAXN 5005
using namespace std;
int M[MAXN][MAXN], D[MAXN];
int solve(int i, int j){
    if(i >= j) return 0;
    if(M[i][j] != -1) return M[i][j];
    if(D[i] == D[j]) return M[i][j] = 1 + solve(i + 1, j - 1);
    return M[i][j] = max(solve(i + 1, j), solve(i, j - 1));
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int N;
    while(cin >> N){
        for(int i=0;i<N;i++) for(int j=0;j<N;j++) M[i][j] = -1;
        for(int i=0;i<N;i++) cin >> D[i];
        cout << solve(0, N - 1) << "\n";
    }
}
