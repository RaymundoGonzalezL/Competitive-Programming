#include <iostream>
using namespace std;
int main(){
	int N, i, j;
	bool first;
	unsigned long long k;
	cin >> N;
	for(i=0;i<N;i++){
		cin >> k;

		first = false;
		for(j=0;j<16;j++){
			if((k & 1 << j) != 0){
				if(!first){
					cout << j;
					first = true;
				}else
					cout << " " << j;
			}
		}	
		cout << endl;
	}
}