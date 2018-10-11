#include <stdio.h>
#include <math.h>

int main(){
    int casos,tiendas,n;
    scanf("%d",&casos);
    while(casos--){
        int maximo = 0;
        int minimo = 1000000;
        scanf("%d",&tiendas);
        while(tiendas--){
            scanf("%d",&n);
            maximo = fmax(maximo,n);
            minimo = fmin(minimo,n);
        }
        printf("%d\n",(maximo-minimo)*2);
    }
    return 0;
}
