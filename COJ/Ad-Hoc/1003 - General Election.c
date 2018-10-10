#include <stdio.h>
#include <stdlib.h>

int main(){
    int t,n,m;
    int votos,x,y,z,mayor=0,sum=0,pos;
    scanf("%d",&t);
    for(x=1;x<=t;x++){
        scanf("%d%d",&n,&m);
        int matriz[m][n];
        for(y=0;y<m;y++){
            for(z=0;z<n;z++){
                scanf("%d",&matriz[y][z]);
            }
        }
        for(y=0;y<n;y++){
            for(z=0;z<m;z++){
                sum+=matriz[z][y];
            }
            if(sum>mayor){
                mayor=sum;
                pos=y+1;
            }
            sum=0;
        }
        printf("%d\n",pos);
        sum=0;
        pos=0;
        mayor =0;
    }
    return 0;
}
