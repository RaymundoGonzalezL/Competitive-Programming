#include <bits/stdc++.h>
#define MOD 1000000007
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
        M[0][0] = a; M[0][1] = b; M[0][2] = 1;
        M[1][0] = 1; M[1][1] = 0; M[1][2] = 0;
        M[2][0] = 0; M[2][1] = 0; M[2][2] = 1;
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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int T;
    ll N;
    matrix A, B, C;
    cin >> a >> b >> c >> T;
    while(T--){
        cin >> N;
        if(N == 1){
            cout << "1\n";
            continue;
        }
        A.init_matrix();
        B = pow_matrix(A, N - 2);
        memset(C.M, 0, sizeof(C.M));
        C.M[0][0] = 1;
        C.M[2][0] = c;
        B = B * C;
        cout << B.M[0][0] << "\n";
    }
}
