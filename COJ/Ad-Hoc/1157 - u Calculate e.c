#include <stdio.h>
double factorial(int n);
int main(){
    int x,sum=0;
    double sum2=0.0;
    printf("n e\n- -----------\n");
    for(x=0;x<10;x++){
        if(x==0 || x==1){
            sum+=1/factorial(x);
            printf("%d %d\n",x,sum);
            sum2=sum;
        }
        else if(x==2){
            sum2+=1/factorial(x);
            printf("%d %.1f\n",x,sum2);
        }else{
            sum2+=1/factorial(x);
            printf("%d %.9f\n",x,sum2);
        }
    }
    fflush(stdin);
}

double factorial(int x){
    if (x <= 1)
        return 1;
    else
        return x * factorial (x - 1);
}
