#include<cstdio>
#include<vector>
#include<algorithm>
#define MAX 100000000
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

vector< pair<int, ii> > caminos;
vector<int> indices; 
int n,m; 

class UnionFind {
private:
  vi p, rank, setSize;
  int numSets;
public:
  UnionFind(int N) {
    setSize.assign(N, 1); numSets = N; rank.assign(N, 0);
    p.assign(N, 0); for (int i = 0; i < N; i++) p[i] = i; }
  int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
  bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
  void unionSet(int i, int j) { 
    if (!isSameSet(i, j)) { numSets--; 
    int x = findSet(i), y = findSet(j);
    if (rank[x] > rank[y]) { p[y] = x; setSize[x] += setSize[y]; }
    else                   { p[x] = y; setSize[y] += setSize[x];
                             if (rank[x] == rank[y]) rank[y]++; } } }
  int numDisjointSets() { return numSets; }
  int sizeOfSet(int i) { return setSize[findSet(i)]; }
};
int kruskal(int index){
	int costo=0;
	UnionFind UF(n);
	for(int i = 0; i < m; i++){ 
			pair<int, ii> front = caminos[i];
			if((index!=i)&&(!UF.isSameSet(front.second.first, front.second.second))){ 
				
				costo += front.first; 
				UF.unionSet(front.second.first, front.second.second); 
				
				if(index==-1) indices.push_back(i); 
			}
	}
	if(UF.numDisjointSets()>1) return MAX;
	return costo;
}
int main(){
	int t;
	int a,b,c;
	int mejorCosto, segundoMejor, aux, tam;
	scanf("%d",&t);
	
	while(t--){
		scanf("%d%d",&n,&m);
		for(int i = 0; i < m; i++){
			scanf("%d%d%d",&a,&b,&c);
			caminos.push_back(make_pair(c,ii(a-1,b-1)));
		}
		sort(caminos.begin(),caminos.end());
		mejorCosto = kruskal(-1);
		segundoMejor = MAX; 
		tam = indices.size();
		for(int i = 0; i < tam; i++){
			aux = kruskal(indices[i]);
			if(aux<segundoMejor){
				segundoMejor=aux;
			}
			if(segundoMejor==mejorCosto) break;
		}
		printf("%d %d\n",mejorCosto,segundoMejor);
		caminos.clear();
		indices.clear();
	}
	return 0;
}