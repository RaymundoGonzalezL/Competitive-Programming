#include <stdio.h>

int main(){
    float sum=0,n;
    for(int x=1;x<=12;x++){
        scanf("%f",&n);
        sum+=n;
    }
    printf("$%.2f",sum/12);
}
