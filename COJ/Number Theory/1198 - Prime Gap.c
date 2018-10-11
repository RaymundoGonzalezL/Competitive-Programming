#include <stdio.h>
#include <stdlib.h>
#define ULLI unsigned long long int
int isPrimeFromHell(ULLI K){
    int x;
    if(K <= 2) return K == 2;
    for(x=2;x<=sqrt((double)K);x++)
        if(K % x == 0)
            return 0;
    return 1;
}
ULLI primoInferior(ULLI n){
    while(!isPrimeFromHell(n)) n--;
    return n;
}
ULLI primoSuperior(ULLI n){
    while(!isPrimeFromHell(n)) n++;
    return n;
}

int main(){
    ULLI n;
    while(scanf("%llu",&n) && n!=0){
        printf("%llu\n",primoSuperior(n) - primoInferior(n));
    }
}