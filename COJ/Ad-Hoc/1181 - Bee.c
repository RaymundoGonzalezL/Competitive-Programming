#include <stdio.h>
void fibo(int);
main(){
    int n,i;
    while(scanf("%d",&n) && n!=-1){
        fibo(n+2);
    }
}
void fibo(int n){
    int i;
    long long int a = 1;
    long long int b = 1;
    int c;
    for(i=1;i<n;i++){
        c = a+b;
        a = b;
        b = c;
    }
    printf("%lld %lld\n",a-1,b-1);
}