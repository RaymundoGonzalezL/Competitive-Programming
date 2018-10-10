#include <stdio.h>
#include <stdlib.h>

int main(){
    int casos,n1,n2;
    long long int sum = 0;
    scanf("%d",&casos);
    int x;
    while(casos--){
        scanf("%d%d",&n1,&n2);
        for(x=n1;x<=n2;x++)
            sum+=x*(x+1)*(x+2);
        printf("%lld\n",sum%100);
        sum = 0;
    }
}
