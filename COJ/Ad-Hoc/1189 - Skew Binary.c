#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    char num[100];
    double decimal;
    int i,len;
    while(scanf("%s",num)==1)
    {
        if(strcmp(num,"0")==0)
            break;
        len=strlen(num);
        decimal=0;
        for(i=0;i<len;i++)
        {
            decimal+=(num[i]-48)*(pow(2,len-i)-1);
        }
        printf("%.lf\n",decimal);
    }
    return 0;
}
