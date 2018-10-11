#include <iostream>
using namespace std;

int main(){
    int n;
    int p[6];
    cin >> n;
    for(int x=1;x<=n;x++){
        cin >> p[0] >> p[1] >> p[2] >> p[3] >> p[4] >> p[5];
        cout << 1-p[0] << " " << 1-p[1] << " " << 2-p[2] << " " << 2-p[3] << " " << 2-p[4] << " " << 8-p[5] << endl;
    }
}
