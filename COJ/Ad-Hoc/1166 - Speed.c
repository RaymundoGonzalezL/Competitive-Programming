#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1,n2,n,y,x;
    scanf("%d",&n1);
    for(x=1;x<=n1;x++){
        int contador1=0,contador2=0;
        scanf("%d",&n2);
        for(y=1;y<=n2;y++){
            scanf("%d",&n);
            if(n%2==0)
                contador1++;
            else
                contador2++;
        }
        printf("%d even and %d odd.\n",contador1,contador2);
    }
    return 0;
}
