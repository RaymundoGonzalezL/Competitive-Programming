#include <iostream>
using namespace std;
char A[26];
bool busca(string s, char c){
    for(int x=0;x<s.length();x++) if(s[x] == c) return true;
    return false;
}
int main(){
    string llave,palabra;
    int K,x;
    cin >> llave;
    cin >> K;
    cin >> palabra;
    int cont = 0;
    for(x = K-1;cont<llave.length();x++){
        x%=26;
        A[x] = llave[cont++];
    }
    int id = 0;
    for(int i = x; i != K-1; i++){
        i%=26;
        if(i == K-1) break;
        if(!busca(llave,'A' + id)){
            A[i] = 'A' + id++;
        }else{
            id++;
            i--;
        }
    }
    int y;
    for(x=0;x<palabra.length();x++){
        for(y=0;y<26;y++)
            if(palabra[x] == A[y]) break;
        cout << (char)('A' + y);
    }
}
