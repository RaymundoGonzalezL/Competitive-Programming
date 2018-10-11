#include <iostream>
#include <math.h>
#define SQ3 sqrt(3)
#define PI acos(-1)
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    cout.precision(3);
    cout << fixed;
    double n;
    while(cin >> n){
        cout << n*n*(1-SQ3+PI/3) << " " << n*n*(2*SQ3-4+PI/3) << " " << n*n*(4-2*PI/3-SQ3) << "\n";
    }
}