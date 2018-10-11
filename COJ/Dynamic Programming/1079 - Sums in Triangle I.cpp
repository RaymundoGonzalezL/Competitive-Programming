#include <iostream>
#include <algorithm>
#define endl '\n'
using namespace std;
int matriz[101][101];
int resuelve(int n){
    int x,y;
    if(n == 1) return matriz[0][0];
    for(x=n-2;x>=0;x--){
        for(y=0;y<=x;y++){
            matriz[x][y]+= max(matriz[x+1][y],matriz[x+1][y+1]);
        }
    }
    return matriz[0][0];
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int casos;
    cin >> casos;
    int n;
    while(casos--){
        cin >> n;
        for(int x=0;x<n;x++){
            for(int y=0;y<x+1;y++){
                cin >> matriz[x][y];
            }
        }
        cout << resuelve(n) << endl;
    }
}