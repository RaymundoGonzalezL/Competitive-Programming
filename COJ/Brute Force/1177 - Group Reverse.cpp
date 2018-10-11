#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
	short G, L, i;
	char s[101];
	while(true){
		scanf("%d", &G);
		if(!G) break;
		scanf("%s", s);
		L = strlen(s)/G;
		for(i=0;i<strlen(s);i+=L)
			reverse(s+i, s+i+L);
		printf("%s\n", s);
	}
}