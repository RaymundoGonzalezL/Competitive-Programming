#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int k,m,x,c,r,cur;
    bool band;
    while(cin >> k && k!=0){
        band = false;
        cin >> m;
        int cursos[k];
        for(x=0;x<k;x++)
            cin >> cursos[x];
        sort(cursos,cursos+k);
        while(m--){
            cin >> c >> r;
            while(c--){
                cin >> cur;
                if(!r) continue;
                if(binary_search(cursos,cursos+k,cur)) r--;
            }
            if(r) band = true;
        }
        if(band) cout << "no\n";
        else cout << "yes\n";
    }
}