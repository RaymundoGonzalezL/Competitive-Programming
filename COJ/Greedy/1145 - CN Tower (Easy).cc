#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
    int casos,n,x;
    double mayor;
    string lugar;
    cin >> casos;
    while(casos--){
        cin >> n;
        mayor = 0.0;
        double angulos[n+1];
        for(x=0;x<n;x++)
            cin >> lugar >> angulos[x];
        sort(angulos, angulos+n);
        angulos[n] = angulos[0] + 360.0;
        for(x=1;x<=n;x++)
            if(angulos[x] - angulos[x-1] > mayor) mayor = angulos[x] - angulos[x-1];
        cout << (int)ceil((360.0 - mayor) * 12.0) << endl;
    }
}