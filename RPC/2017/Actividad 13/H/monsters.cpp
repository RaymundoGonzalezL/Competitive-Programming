#include <bits/stdc++.h>
#define MAXN 200005
using namespace std;
typedef pair<int,int> ii;
ii A[MAXN];
int solve(int N){
    bool bs[N];
    memset(bs, 0, sizeof bs);
    int r = 0;
    for(int i=0;i<N;i++){
        if(bs[i] || A[i].second == i) continue;
        int c = 0, j = i;
        while(!bs[j]){
            bs[j] = 1;
            j = A[j].second;
            c++;
        }
        r+= (c - 1);
    }
    return r;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int N;
    while(cin >> N){
        for(int i=0;i<N;i++){
            cin >> A[i].first;
            A[i].second = i;
        }
        sort(A, A + N);
        cout << solve(N) << "\n";
    }
}
