#include <stdio.h>
#include <stdlib.h>
main()
{
    float i,n=2;
    for(scanf("%f",&i);i>0;i-=1/n++);
    if (n-=2) printf("%.0f card(s)\n",n), main();
}
