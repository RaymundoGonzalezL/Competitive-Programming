#include <iostream>
#include <math.h>
using namespace std;
bool esPrimo (int num) {
	if (num % 2 == 0) return false;
	for (int i=3; i<sqrt(num)+1; i+=2)
		if (num % i == 0) return false;
	return true;
}
int n;
void dfs(int a,int primo){
    if(a == n)
        cout << primo << "\n";
    else{
        for(int x=1;x<10;x+=2)
            if(esPrimo(primo*10+x))
                dfs(a+1,primo*10+x);
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(0);
    while(cin >> n){
        dfs(1,2);
        dfs(1,3);
        dfs(1,5);
        dfs(1,7);
    }
}