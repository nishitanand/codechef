#include <bits/stdc++.h>

using namespace std;

#define lli long long int
lli mod = 1000000007;

lli fib(int n)
{
    lli a=0,b=1,c,i;
    for (i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        b=b%mod;
    }
    return b%mod;
}

int main()
{
    lli t,n,ans;
    char g;
    cin>>t;
    while(t--)
        {
            cin>>g>>n;
            n+=1;
            if (g=='m')
                n+=1;
            else if (g=='f')
                n+=2;
            ans=fib(n);
            ans=ans%mod;
            cout<<ans<<"\n";
        }


    return 0;
}
