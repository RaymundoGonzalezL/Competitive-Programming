#include <bits/stdc++.h>
#define MAXN 105
using namespace std;
char mapa[MAXN][MAXN];
int N,M;
int s,x,y;
bool valido(int i, int j){
    return i >= 0 && i < M && j < M && j >= 0;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    while(cin >> M >> N){
        for(int i=0;i<M;i++) for(int j=0;j<M;j++) mapa[i][j] = '.';
        while(N--){
            cin >> s >> x >> y;
            if(s == 0){
                if(valido(y,x)) mapa[y][x] = 'o';
                if(valido(y,x+1)) mapa[y][x+1] = '_';
                if(valido(y,x-1)) mapa[y][x-1] = '_';
            }else{
                if(valido(y,x)) mapa[y][x] = '|';
                if(valido(y,x+1)) mapa[y][x+1] = '_';
                if(valido(y,x-1)) mapa[y][x-1] = '_';
                for(int i=1;i<=s;i++){
                    if(valido(y+i,x)) mapa[y+i][x] = '|';
                    if(valido(y+i,x+1)) mapa[y+i][x+1] = '\\';
                    if(valido(y+i,x-1)) mapa[y+i][x-1] = '/';
                }
                if(valido(y+s+1,x)) mapa[y+s+1][x] = '^';
            }
        }
        for(int i=0;i<M+2;i++) cout << "*";
        cout << "\n";
        for(int i=M-1;i>=0;i--){
            cout << "*";
            for(int j=0;j<M;j++){
                cout << mapa[i][j];
            }
            cout << "*\n";
        }
        for(int i=0;i<M+2;i++) cout << "*";
        cout << "\n\n";
    }
}
