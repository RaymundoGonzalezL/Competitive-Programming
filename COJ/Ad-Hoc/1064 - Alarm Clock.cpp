#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int h1,h2,m1,m2;
    int hora,alarma,sum;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2) == 4){
        if(h1==0 && h2 == 0 && m1 == 0 && m2 == 0)
            break;
        hora = h1*60+m1;
        alarma = h2*60+m2;
        if(hora<=alarma)
            sum = alarma-hora;
        else{
            if(h2==0 && h1!=0)
                sum = (24*60+m2)-hora;
            else
                sum = 1440-(hora-alarma);
        }
        printf("%d\n",sum);
    }
}
