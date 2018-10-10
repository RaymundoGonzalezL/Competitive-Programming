#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define FOR(i,a,b,c) for(int i=a;i<(int)b;i++)
#define F first
#define S second
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0);
#define MP make_pair
#define DFS_WHITE -1
#define DFS_BLACK 1
#define DFS_GRAY 2
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
vector<pair<double,ii> > edgeList;
double mst_cost = 0.0;
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
vector<ii> ant;
int main(){
    FASTIO;
    double x,y;
    double dist = 0.0;
    int casos;
    cin >> casos;
    UnionSet u(casos);
    FOR(i,0,casos,1){
        dist = 0.0;
        cin >> x >> y;
        FOR(j,0,ant.size(),1){
            dist = hypot(ant[j].F-x,ant[j].S-y);
            edgeList.push_back(MP(dist,ii(i,j)));
        }

        ant.push_back(MP(x,y));
    }
    sort(edgeList.begin(), edgeList.end());
    FOR(x,0,edgeList.size(),1){
        pair<double,ii> frente = edgeList[x];
        if(!u.isSameSet(frente.S.F, frente.S.S)){
            mst_cost+= frente.F;
            u.unionSet(frente.S.F,frente.S.S);
        }
    }
    printf("%.2lf\n",mst_cost);
}