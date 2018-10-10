#include <iostream>
#include <algorithm>
#define LLI long long int
#define MAX 101
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;

LLI a[MAX];

void init(){
    a[0] = 0;
    a[1] = 7;
    a[2] = 19;
    LLI aux;
    for(int x=3;x<MAX;x++){
        aux = 0;
        for(int y=1;y<=x;y++){
            for(int z=1;z<=y;z++){
                if(__gcd(__gcd(y,x),z) == 1) aux++;
            }
        }
        a[x] = a[x-1] + (6*aux);
    }
}
int main(){
    FASTIO;
    init();
    int casos,n;
    cin >> casos;
    while(casos--){
        cin >> n;
        cout << a[n] << "\n";
    }
}