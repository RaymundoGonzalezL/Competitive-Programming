#include <iostream>
#include <string.h>
using namespace std;

int main(){
    long long int n;
    long long int band=0,x=0,r=0;
    long long int numero[1000];
    while(band!=-1){
        cin >> n;
        if(n==0)
            cout << n << "\n";
        else if(n<0)
            break;
        else{
            while(n!=0){
                r=n%3;
                numero[x] = r;
                n=n/3;
                x++;
            }
            for(long long int y=x-1;y>=0;y--)
                cout << numero[y];
            cout << "\n";
        }
        x=0;
    }
}
