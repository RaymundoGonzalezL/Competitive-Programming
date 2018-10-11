#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> res;
void solve(long long n){
    res.clear();
    if(n == 0){
        cout << "10\n";
        return;
    }
    if(n < 10){
        cout << n << "\n";
        return;
    }
    for(int x=9;x>=2;x--){
        while(n%x == 0){
            n = n/x;
            res.push_back(x);
        }
    }
    if(n > 10){
        cout << "-1\n";
        return;
    }
    if(n > 1 && n < 10) res.push_back(n);
    sort(res.begin(),res.end());
    for(int x=0;x<res.size();x++){
        cout << res[x];
    }
    cout << "\n";
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    long long n;
    cin >> n;
    solve(n);
}
