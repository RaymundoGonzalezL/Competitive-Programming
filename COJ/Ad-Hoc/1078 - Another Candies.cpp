#include <iostream>
using namespace std;
int main(){
    int cases,ninos,dulces,sum=0;
    cin >> cases;
    for(int x=0;x<cases;x++){
        cin >> ninos;
        for(int y=0;y<ninos;y++){
            cin >> dulces;
            sum+=dulces;
        }
        if(sum%ninos == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
        sum=0;
    }
}
