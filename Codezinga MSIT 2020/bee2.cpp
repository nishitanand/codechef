#include <bits/stdc++.h>

#include <vector>
#define REP(i,n) for (int i = 1; i <= n; i++)
using namespace std;

typedef long long ll;
typedef vector<vector<ll> > matrix;
const ll MOD = 1000000007;
const int K = 2;

matrix mul(matrix A, matrix B)
{
    matrix C(K+1, vector<ll>(K+1));
    REP(i, K) REP(j, K) REP(k, K)
        C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
    return C;
}

matrix pow(matrix A, int p)
{
    if (p == 1)
        return A;
    if (p % 2)
        return mul(A, pow(A, p-1));
    matrix X = pow(A, p/2);
    return mul(X, X);
}

int fib(int N)
{
    vector<ll> F1(K+1);
    F1[1] = 1;
    F1[2] = 1;

    matrix T(K+1, vector<ll>(K+1));
    T[1][1] = 0, T[1][2] = 1;
    T[2][1] = 1, T[2][2] = 1;

    if (N == 1)
        return 1;
    T = pow(T, N-1);

    ll res = 0;
    REP(i, K)
        res = (res + T[1][i] * F1[i]) % MOD;
    return res;
}

int main()
{
    ll t,n,ans;
    char g;
    cin>>t;
    while(t--)
        {
            cin>>g>>n;
            if (g=='m')
                n+=1;
            else if (g=='f')
                n+=2;
            ans=fib(n);
            cout<<ans<<"\n";
        }


    return 0;
}
