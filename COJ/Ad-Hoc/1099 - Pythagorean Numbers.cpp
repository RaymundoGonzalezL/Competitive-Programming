#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    int band = 0;
    while(band!=-1){
        cin >> a;
        if(a==0)
            break;
        cin >> b;
        cin >> c;
        if((a*a)+(b*b)==c*c || (a*a)+(c*c) == b*b || (b*b)+(c*c)==a*a)
            cout << "right\n";
        else
            cout << "wrong\n";
    }
    return 0;
}
