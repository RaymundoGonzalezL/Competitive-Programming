#include <bits/stdc++.h>
#define MAXN 1000005
using namespace std;
double A[MAXN];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int N;
    while(cin >> N){
        for(int i=0;i<N;i++) cin >> A[i];
        sort(A, A + N);
        int R = 1;
        double aux = A[0];
        for(int i=1;i<N;i++){
            if(A[i] - aux > 1){
                aux = A[i];
                R++;
            }
        }
        cout << R << "\n";
    }
}
