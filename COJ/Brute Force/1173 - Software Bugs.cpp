#include <iostream>
using namespace std;
int main(){
    string palabra;
    int pos;
    while(getline(cin,palabra)){
        pos = palabra.find("BUG");
        while(pos != string::npos){
            palabra = palabra.substr(0,pos).append(palabra.substr(pos+3));
            pos = palabra.find("BUG");
        }
        cout << palabra << endl;
    }
}