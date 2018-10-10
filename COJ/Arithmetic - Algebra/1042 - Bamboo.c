#include <stdio.h>
main(){
    double average=0,H,D;
    int t,i;
    scanf("%d",&t);
    i=t;
    while(t--){
        scanf("%lf%lf",&H,&D);
        average += H-((H*H+D*D)/(2*H));
        printf("%.1lf\n",H-((H*H+D*D)/(2*H)));
    }
    printf("%.1lf\n",average/i);
}