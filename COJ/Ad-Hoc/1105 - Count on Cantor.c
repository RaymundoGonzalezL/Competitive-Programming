#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    long n,t,r;
    int casos;
    scanf("%d",&casos);
    while(casos--){
        scanf("%ld",&n);
        t = (sqrt(n*2)-0.5);
        r = n - t * (t+1)/2;
        if(t%2==0)
            printf("TERM %ld IS %ld/%ld\n",n,(t+2-r),r);
        else
            printf("TERM %ld IS %ld/%ld\n",n,r,(t+2-r));
    }
    return 0;
}
