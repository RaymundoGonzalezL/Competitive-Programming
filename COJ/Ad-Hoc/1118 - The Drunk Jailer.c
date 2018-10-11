#include <stdio.h>
#include <math.h>
int main(){
    int casos,n;
    scanf("%d",&casos);
    while(casos--){
        scanf("%d",&n);
        printf("%d\n",(int)sqrt(n));
    }
}