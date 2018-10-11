#include <stdio.h>
#include <math.h>

double heron(double,double,double);
double semip(double,double,double);

int main(){
    double tercio = (double)2/3;
    double a,b,c;
    int d,e,f;
    double area;
    double s;
    while(scanf("%d%d%d",&d,&e,&f)!=EOF){
        a = d*(2/3.0);
        b = e*(2/3.0);
        c = f*(2/3.0);
        if(a+b<=c || b+c<=a ||c+a<=b)
            area = -1;
        else
            area = heron(a,b,c);
        printf("%.3lf\n", area);
    }
}
double heron(double a, double b, double c){
    double s = semip(a,b,c);
    return 3*sqrt(s*(s-a)*(s-b)*(s-c));
}
double semip(double a, double b, double c){
    return (a+b+c)/2.0;
}