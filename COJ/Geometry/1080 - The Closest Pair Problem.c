#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Puntos{
    double x,y;
} puntitos[10005];
int comparador(const void *a, const void *b){
    struct Puntos *x= (struct Puntos*)a;
    struct Puntos *y = (struct Puntos*)b;
    return x->x - y->x;
}
double distancia(struct Puntos a, struct Puntos b){
    return pow(b.x - a.x,2) + pow(b.y - a.y,2);
}
int main(){
    int casos,x,y;
    double dist;
    while(scanf("%d",&casos) && casos != 0){
        for(x=0;x<casos;x++)
            scanf("%lf%lf",&puntitos[x].x,&puntitos[x].y);
        if(casos == 1){
            puts("INFINITY");
            continue;
        }
        qsort(puntitos,casos,sizeof(struct Puntos),comparador);
        double min = distancia(puntitos[0],puntitos[1]);
        for(x=0;x<casos;x++){
            for(y=0;y<casos;y++){
                if(x!=y){
                    dist = distancia(puntitos[x],puntitos[y]);
                    if(dist < min)
                        min = dist;
                }
            }
        }
        min = sqrt(min);
        if(min > 10000.0 || fabs(min - 10000.0) < 0.00001)
            puts("INFINITY");
        else
            printf("%.4lf\n",min);
    }
}