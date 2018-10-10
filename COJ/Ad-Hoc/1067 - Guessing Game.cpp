#include <iostream>

using namespace std;

int main(){
    int n;
    string parte1,parte2;
    int ultimo = 11, primero = 0;
    while(cin >> n && n!=0){
        cin >> parte1 >> parte2;
        if(parte2 == "high"){
            if(ultimo > n)
                ultimo = n;
        }else if(parte2 == "low"){
            if(primero < n)
                primero = n;
        }else if(parte2 == "on"){
            if(n >= ultimo || n <= primero)
                cout << "Stan is dishonest\n";
            else
                cout << "Stan may be honest\n";
            ultimo = 11; primero = 0;
        }
    }
}