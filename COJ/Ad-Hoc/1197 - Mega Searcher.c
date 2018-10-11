#include <stdio.h>
#include <stdlib.h>
int ip1[4],ip2[4];
int main(){
    unsigned long long int sum = 0;
    scanf("%d.%d.%d.%d %d.%d.%d.%d", &ip1[0], &ip1[1], &ip1[2], &ip1[3], &ip2[0], &ip2[1], &ip2[2], &ip2[3]);
	sum+=ip1[3] - ip2[3] + 1;
	sum+=(ip1[2] - ip2[2]) * 256;
	sum+=((ip1[1] - ip2[1]) * 256) * 256;
	sum+=(((ip1[0] - ip2[0]) * 256) * 256) * 256;
	printf("%llu\n", sum);
	return 0;
}