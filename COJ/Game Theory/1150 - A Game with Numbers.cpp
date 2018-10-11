#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    for(int x=0;x<1000;x++){
        cin >> n;
        if(n%10)
            cout << "1\n" << n%10 << "\n";
        else cout << "2\n";
    }
}