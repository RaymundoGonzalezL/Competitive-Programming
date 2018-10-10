#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000001
int arreglo[MAX];
void init(){
    int x;
    arreglo[0] = 1;
    for(x=1;x<MAX;x++)
        arreglo[x] = (arreglo[(int)floor(x - sqrt(x))] + arreglo[(int)floor(log(x))] + arreglo[(int)floor(x*sin(x)*sin(x))])%1000000;
}

int main(){
    init();
    int n;
    while(scanf("%d",&n) && n!=-1){
        printf("%d\n",arreglo[n]);
    }
}