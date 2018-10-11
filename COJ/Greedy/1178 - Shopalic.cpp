#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int casos,n,p,sum,x;
    cin >> casos;
    vector<int> precios;
    while(casos--){
        sum = 0;
        cin >> n;
        precios.clear();
        for(x=0;x<n;x++){
            cin >> p;
            precios.push_back(p);
        }
        sort(precios.begin(),precios.end());
        for(x=n-3;x>=0;x-=3)
            sum+=precios[x];
        cout << sum << endl;
    }
}