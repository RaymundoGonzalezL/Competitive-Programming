#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long ll;
vector<string> pots = {"1","2","4","8","16","32","64","128",
"256","512","1024","2048","4096","8192","16384","32768",
"65536","131072","262144","524288","1048576","2097152",
"4194304","8388608","16777216","33554432",
"67108864","134217728","268435456","536870912",
"1073741824","2147483648","4294967296"};

ll resp[35][15];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    string N;
    cin >> N;
    for(int i=0;i<N.size();i++){
        for(int j=0;j<pots.size();j++){
            for(int k = pots[j].size() - 1; k >= 0; k--){
                if(pots[j][k] == N[i]){
                    if(k == 0) resp[j][k]++;
                    else resp[j][k] = (resp[j][k] + resp[j][k - 1])%MOD;
                }
            }
        }
    }
    ll sum = 0;
    for(int i=0;i<pots.size();i++)
        sum = (sum + resp[i][pots[i].size() - 1]) % MOD;
    cout << sum << "\n";
}
