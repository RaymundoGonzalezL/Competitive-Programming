#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793
int main(){
    int casos,n;
    double r;
    scanf("%d",&casos);
    while(casos--){
        scanf("%lf%d",&r,&n);
        printf("%.4lf %.4lf\n",(sin(PI/n)*r*2.0*n),(tan(PI/n)*r*2.0*n));
    }
}