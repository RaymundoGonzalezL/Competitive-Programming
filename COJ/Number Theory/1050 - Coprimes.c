#include <stdio.h>
#include <stdlib.h>
int gcd(int n, int i){
		if(i==0)
			return n;
		return gcd(i,n%i);
}
int main(){
    int c=0;
    int n,x;
    scanf("%d",&n);
    for(x=1;x<n;x++){
        if(gcd(n,x) == 1)
            c++;
    }
    printf("%d",c);
    return 0;
}
