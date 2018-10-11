#include <stdio.h>
#include <stdlib.h>
#define s(n) scanf("%d",&n)
int par=0,imp=0;
void intercambia(){
    int aux = par;
    par = imp;
    imp = aux;
}
int main(){
    int cases,n,x;
    s(cases);
    for(x=0;x<cases;x++){
        s(n);
        if(x%2==0)
            par+=n;
        else
            imp+=n;
    }
    if(par < imp) intercambia();
    printf("%d %d",par,imp);
}
