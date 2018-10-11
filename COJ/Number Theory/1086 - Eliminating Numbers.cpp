#include <bits/stdc++.h>
#define MAXN 4567895
using namespace std;
typedef long long ll;
bitset<MAXN> bs;
vector<int> primos;
void init(){
    bs.set();
    bs[0] = bs[1] = 0;
    for(ll x=2;x<MAXN;x++){
        if(bs[x]){
            for(ll y=x*x;y<MAXN;y+=x) bs[y] = 0;
            primos.push_back((int)x);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    init();
    int N;
    for(int i=0;i<10;i++){
        cin >> N;
        cout << upper_bound(primos.begin(), primos.end(), N) - primos.begin() << "\n";
    }
}
