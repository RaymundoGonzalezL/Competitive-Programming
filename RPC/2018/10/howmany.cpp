#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int T,a,b;
    cin >> T;
    while(T--){
        cin >> a >> b;
        cout <<(int) ((a * log10(2) + 1) + (b * log10(5) + 1)) - 1 << "\n";
    }
}
