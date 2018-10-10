#include <bits/stdc++.h>
#define MAXN 1005
using namespace std;
int A[MAXN];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int N;
    while(cin >> N){
        for(int i=0;i<N;i++) cin >> A[i];
        if(N <= 2) cout << "1\n";
        else{
            int aux;
            bool sePuede;
            for(int i=0;i<N - 1;i++){
                aux = A[i + 1] - A[i];
                sePuede = true;
                for(int j=i+2;j<N;j++)
                    if(A[j] - A[j - 1] != aux) sePuede = false;
                if(sePuede){
                    cout << i + 1 << "\n";
                    break;
                }
            }
        }
    }
}
