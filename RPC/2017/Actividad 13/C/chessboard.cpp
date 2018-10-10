#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int S;
    char A;
    while(cin >> S >> A){
        if(A == 'K'){
            if(S > 1) cout << "4\n";
            else cout << "1\n";
        }else if(A == 'N'){
            if(S < 3) cout << "1\n";
            else cout << "2\n";
        }else{
            cout << S << "\n";
        }
    }
}
