#include <iostream>
using namespace std;
int main(){
	int n,m,b,c,ans1,ans2,d,e,i,j;
	while(cin>>n){	

		ans1=0;
		ans2=0;
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				ans2=ans2+i*j;
		ans1=n*(n+1);
		ans1=ans1/2;
		b=ans1;
		c=0;
		for(i=2;i<=n;i++){
			c=c+i-1;
			ans1=ans1+b-c;
		}
		cout<<ans1<<" "<<ans2<<endl;
 
	}
	return 0;
}