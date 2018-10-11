#include <iostream>
#include <stdio.h>
using namespace std;
int arreglo[7490];
void init(){
    int monedas[] = {1,5,10,25,50},x,y;
    arreglo[0] = 1;
    for(x=0;x<5;x++){
        for(y = monedas[x];y<7490;y++){
            arreglo[y]+= arreglo[y - monedas[x]];
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    init();
    int n;
    while(scanf("%d",&n) != EOF){
        printf("%d\n",arreglo[n]);
    }
}