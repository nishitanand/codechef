#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    lli t,n,k,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if (n%2==0)
            ans=((k+2)*n)/2;
        else if (n%2!=0)
        {
            n=n-1;
            ans=((k+2)*n)/2;
            ans+=(k+k+1);
        }

        cout<<ans<<"\n";
    }
    return 0;
}
