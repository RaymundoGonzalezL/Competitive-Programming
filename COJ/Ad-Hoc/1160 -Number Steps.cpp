#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int t,x,y,i,j,b,c,d;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d%d",&x,&y);
		if(x==y || x==y+2)
		{
			if(x%2==0)
			{
				printf("%d\n",x+y);
			}
			else
				printf("%d\n",x+y-1);
		}
		else
			printf("No Number\n");
	}
	return 0;
}
