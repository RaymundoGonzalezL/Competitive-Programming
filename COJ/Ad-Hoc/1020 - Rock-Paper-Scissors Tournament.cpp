#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main(){
	int N, K, i, p1, p2, players[100] = {0}, losses[100] = {0}, count = 0, ties[100] = {0};
	string m1, m2;
	while(cin >> N >> K){
		if(count > 0)
			cout << endl;
		count++;
		for(i=0;i<N;i++){
			players[i]=0;
			losses[i]=0;
			ties[i]=0;
		}
		for(i=0;i<K*N*(N-1)/2;i++){
			if(N > 1){
				cin >> p1 >> m1 >> p2 >> m2;
				p1--;
				p2--;
				if(m1 == "paper" && m2 == "rock"){
					players[p1]++;
					losses[p2]++;
				}
				else if(m1 == "rock" && m2 == "paper"){
					players[p2]++;
					losses[p1]++;
				}
				else if(m1 == "scissors" && m2 == "paper"){
					players[p1]++;
					losses[p2]++;
				}
				else if(m1 == "paper" && m2 == "scissors"){
					players[p2]++;
					losses[p1]++;
				}
				else if(m1 == "rock" && m2 == "scissors"){
					players[p1]++;
					losses[p2]++;
				}
				else if(m1 == "scissors" && m2 == "rock"){
					players[p2]++;
					losses[p1]++;
				}
				else{
					ties[p1]++;
					ties[p2]++;
				}
			}
		}
		for(i=0;i<N;i++){
			if( (players[i]+losses[i]) == 0 )
				printf("%c\n", '-');
			else
				printf("%.3f\n", (float)(players[i]/(float)(players[i]+losses[i])));
				
		}
	}
}