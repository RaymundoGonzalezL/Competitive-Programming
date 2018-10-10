#include <bits/stdc++.h>
#define MOD 10000
#define DIM 3
using namespace std;
typedef long long ll;
int a,b,c;
struct matrix{
    ll M[DIM][DIM];
	matrix(){
		memset(M, 0, sizeof(ll) * DIM * DIM);
	}
	void init_matrix() {
        M[0][0] = a; M[0][1] = b; M[0][2] = c;
        M[1][0] = 1; M[1][1] = 0; M[1][2] = 0;
        M[2][0] = 0; M[2][1] = 1; M[2][2] = 0;
	}

	matrix operator* (matrix b) {
		matrix c;
		for (int k = 0; k < DIM; ++ k) {
			for (int i = 0; i < DIM; ++i) {
				for (int j = 0; j < DIM; ++j) {
					c.M[i][j] = (c.M[i][j] + M[i][k] * b.M[k][j]) % MOD;
				}
			}
		}
		return c;
	}
};

matrix pow_matrix(matrix a, ll n) {
    matrix result;
    result.init_matrix();
	for(;n;n>>=1){
        if(n & 1) result = result * a;
        a = a * a;
	}
	return result;
}
int f1,f2,f3,N;
int main(){
    cin >> f1 >> f2 >> f3;
    cin >> c >> b >> a;
    cin >> N;
    if(N == 1)
        cout << f1 << "\n";
    else if(N == 2) cout << f2 << "\n";
    else if(N == 3) cout << f3 << "\n";
    else{
        matrix A, B;
        A.init_matrix();
        memset(B.M, 0, sizeof(B.M));
        B.M[0][0] = f3;
        B.M[1][0] = f2;
        B.M[2][0] = f1;
        B = (pow_matrix(A, N - 4) * B);
        cout << B.M[0][0] << "\n";
    }
}
