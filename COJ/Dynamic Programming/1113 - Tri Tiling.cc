#include <iostream>
#define LLI long long int
#define MAX 31
using namespace std;
LLI dp1[MAX],dp2[MAX];
void init(){
    int x;
    dp1[0] = dp2[1] = 1;
    dp2[0] = dp1[1] = 0;
    for(x=2;x<MAX;x++){
        dp1[x] = dp1[x-2] + 2* dp2[x-1];
        dp2[x] = dp1[x-1] + dp2[x-2];
    }

}
int main(){
    init();
    int n;
    while(cin >> n && n!= -1){
        if(n%2 == 0) cout << dp1[n] + dp2[n] << endl;
        else cout << "0\n";
    }
}