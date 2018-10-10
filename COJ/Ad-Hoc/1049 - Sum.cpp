#include <iostream>
using namespace std;

int main(){
    int n1,n2,sum=0;
    cin >> n1;
    if(n1>0){
        for(n2=1;n2<=n1;n2++)
            sum+=n2;
        cout << sum;
    }
    else{
        for(n2=1;n2>=n1;n2--)
            sum+=n2;
        cout << sum;
    }
}
