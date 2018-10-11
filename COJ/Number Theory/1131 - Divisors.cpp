#include <iostream>
#include <bitset>
#include <vector>
#include <string.h>
using namespace std;
typedef long long int lli;
lli potArriba[450];
bitset<450> bs;
vector<int> primos;
void init(){
    bs.set();
    bs[0] = bs[1] = 0;
    for(int x=2;x<450;x++){
        if(bs[x]){
            for(int y=x*x;y<450;y+=x) bs[y] = 0;
            primos.push_back(x);
        }
    }
}
lli divPot(lli n, lli b){
    lli d=0,r;
    while(n>0){
        r=n/b;
        d+=r;
        n=r;
    }
    return d;
}
void factoriza(int N,bool band){
    int i=0,primo = primos[i];
    int tam = primos.size();
    while(primo <= N && i < tam){
        if(band)
            potArriba[primo] = divPot(N,primo);
        else
            potArriba[primo]-=divPot(N,primo);
        primo = primos[++i];
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    init();
    int N,K;
    lli res;
    while(cin >> N >> K){
        res = 1;
        memset(potArriba,0,sizeof potArriba);
        factoriza(N,1); factoriza(K,0); factoriza(N-K,0);
        for(int x=0;x<primos.size();x++){
            res*= ((potArriba[primos[x]]+1));
        }
        cout << res << "\n";
    }
}
