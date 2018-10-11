#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_PRIMOS 1000001
using namespace std;
int primes[MAX_PRIMOS];
void criba()
{
    int i,j;
    memset(primes, 1, sizeof primes);
    primes[0] = 0;
    primes[1] = 0;
    for(i=4; i<=MAX_PRIMOS; i+=2)
        primes[i] = 0;
    for(i=3; i*i<=MAX_PRIMOS; i+=2)
        if(primes[i])
            for(j=i*i; j<=MAX_PRIMOS; j+=i)
                primes[j] = 0;
}


int main(){
    int n,i;
    bool band;
    criba();
    while (scanf("%d",&n) && n)
    {
        band = false;
        for(i=2; n-i>=2; i++)
        {
            if((primes[i]) && (primes[n-i])){
                band = true;
                break;
            }
        }
        if(band) printf("%d = %d + %d\n", n, i, n-i);
        else printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}