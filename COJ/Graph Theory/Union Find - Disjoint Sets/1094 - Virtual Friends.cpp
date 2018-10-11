#include <iostream>
#include <vector>
#include <map>
#define endl '\n'
using namespace std;

class UnionSet {
private:
	vector<int> p, rank, setSizes;
	int numSets;
public:
	UnionSet(int N) {
		numSets = N;
		rank.assign(N, 0);
		p.assign(N, 0);
		for (int i = 0; i < N; i++)
			p[i] = i;
		setSizes.assign(N, 1);
	}
	int findSet(int i) {
		return (p[i] == i) ? i : p[i] = findSet(p[i]);
	}
	bool isSameSet(int i, int j) {
		return findSet(i) == findSet(j);
	}
	void unionSet(int i, int j) {
		if (!isSameSet(i, j)) {
			int x = findSet(i), y = findSet(j);
			if (rank[x] > rank[y]) {
				setSizes[findSet(x)] += setSizes[findSet(y)];
				p[y] = x;
			} else {
				setSizes[findSet(y)] += setSizes[findSet(x)];
				p[x] = y;
				if (rank[x] == rank[y])
					rank[y]++;
			}
			numSets--;
		}
	}
	int setSize(int i) {
		return setSizes[findSet(i)];
	}
	int numDisjointSets() {
		return numSets;
	}
};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    map<string, int> cuenta;
    int casos,f;
    string nombre1,nombre2;
    cin >> casos;
    int cont = 0;
    while(casos--){
        cuenta.clear();
        cont = 0;
        cin >> f;
        UnionSet us(f*2);
        while(f--){
            cin >> nombre1 >> nombre2;
            if(!cuenta.count(nombre1)) cuenta[nombre1] = cont++;
            if(!cuenta.count(nombre2)) cuenta[nombre2] = cont++;
            us.unionSet(cuenta[nombre1],cuenta[nombre2]);
            cout << us.setSize(cuenta[nombre1]) << endl;
        }
    }
}