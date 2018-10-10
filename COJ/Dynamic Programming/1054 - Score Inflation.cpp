#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
using namespace std;
int A[100001];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int W,K,T;
    int v,p;
    cin >> T;
    while(T--){
        memset(A,0,sizeof A);
        cin >> W >> K;
        for(int x=0;x<K;x++){
            cin >> v >> p;
            for(int y=p;y<=W;y++){
                A[y] = max(A[y],A[y-p] + v);
            }
        }
        cout << A[W] << "\n";
    }
}
