#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;
vi v;
int a,c;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    while(cin >> a >> c && a && c){
        v.resize(c);
        for(int x=0;x<c;x++) cin >> v[x];
        int res = a - v[0];
        for(int x=1;x<c;x++)
            if(v[x] < v[x-1])
                res+= v[x-1] - v[x];
        cout << res << "\n";
    }
}