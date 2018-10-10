#include <bits/stdc++.h>
#define MAXN 50005
using namespace std;
typedef long long ll;

ll A[MAXN], B[MAXN], C[MAXN], D[MAXN], E[MAXN];
void init(){
    A[1] = B[1] = C[1] = D[1] = E[1] = 1;
    for(int i=2;i<MAXN;i++){
        A[i] = (2 * A[i - 1] + A[i - 2]) % 2;
        B[i] = (2 * B[i - 1] + B[i - 2]) % 3;
        C[i] = (2 * C[i - 1] + C[i - 2]) % 4;
        D[i] = (2 * D[i - 1] + D[i - 2]) % 7;
        E[i] = (2 * E[i - 1] + E[i - 2]) % 13;
    }
}
int main(){
    init();
    int N;
    while(cin >> N){
        bool band = 0;
        if(A[N] == 0){
            cout << "Pell's number "<< N <<" is divisible by 2\n";
            band = 1;
        }
        if(B[N] == 0){
            cout << "Pell's number "<< N <<" is divisible by 3\n";
            band = 1;
        }
        if(C[N] == 0){
            cout << "Pell's number "<< N <<" is divisible by 4\n";
            band = 1;
        }
        if(D[N] == 0){
            cout << "Pell's number "<< N <<" is divisible by 7\n";
            band = 1;
        }
        if(E[N] == 0){
            cout << "Pell's number "<< N <<" is divisible by 13\n";
            band = 1;
        }
        if(!band) cout << "-1\n";
    }
}
