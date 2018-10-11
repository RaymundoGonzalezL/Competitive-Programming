#include <iostream>
#include <set>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <map>
#include <utility>
#define endl '\n'
#define MP make_pair
using namespace std;
typedef map<string, set<string> > mapita;
typedef map<string, int> countPalabras;
countPalabras contador;
set<string>::iterator it3;
mapita::iterator it2;
mapita mapa;
vector<pair<int,string> > respuesta;
vector<pair<int, string> >::iterator it;

bool comparador(pair<int,string> a, pair<int,string> b){
    return a.first > b.first || (a.first == b.first && a.second < b.second);
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    string linea;
    while(getline(cin,linea) && linea != "0"){
        string ant = "";
        mapa.clear();
        while(linea != "1"){
            if(isupper(linea[0])){
                mapa[linea] = set<string>();
                ant = linea;
            }else
                mapa[ant].insert(linea);
            getline(cin,linea);
        }
        contador.clear();
        for(it2 = mapa.begin(); it2!= mapa.end(); ++it2){
            for(it3 = it2->second.begin(); it3 != it2->second.end(); ++it3){
                contador[*it3]++;
            }
        }
        int cont = 0;
        for(it2 = mapa.begin(); it2!= mapa.end(); ++it2){
            for(it3 = it2->second.begin(); it3 != it2->second.end(); ++it3){
                if(contador[*it3] > 1) continue;
                cont++;
            }
            respuesta.push_back(MP(cont,it2->first));
            cont = 0;
        }
        sort(respuesta.begin(), respuesta.end(), comparador);
        for(it = respuesta.begin(); it != respuesta.end(); ++it)
            cout << it->second << " " << it->first << endl;
        respuesta.clear();
    }
}