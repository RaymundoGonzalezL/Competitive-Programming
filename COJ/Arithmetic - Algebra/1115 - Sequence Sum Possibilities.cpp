#include <iostream>
using namespace std;
int main(){
    int casos,numeroquenosirveequisde,n;
    cin >> casos;
    while(casos--){
        cin >> numeroquenosirveequisde >> n;
        int cont = 0,aux;
        for(int a=1;a*(a+1)/2 < n;a++){
            aux = n - a*(a+1)/2;
            if(aux%(a+1)==0) cont++;
        }
        cout << numeroquenosirveequisde << " " << cont << endl;
    }
}