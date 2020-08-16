#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t,n,q,p,i,j;
    //cin>>t;
    scanf("%d",&t);
    while(t--)
    {
        cin>>n>>q;
        lli a[n];
        lli b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        lli ans;
        for(i=0;i<q;i++)
        {
            lli even=0;
            lli odd=0;
            cin>>p;
            for(j=0;j<n;j++)
            {
                b[j]=a[j]^p;
                ans=__builtin_popcount(b[j]);
                if (ans%2==0)
                    even++;
                else
                    odd++;
            }
            cout<<even<<" "<<odd<<"\n";
        }
    }



    return 0;
}
