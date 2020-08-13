#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        lli a[n];
        lli i;
        lli sum=0;
        for (i=0;i<n;i++)
        {
            cin>>a[i];
            if (a[i]>k)
            {
                sum+=(a[i]-k);
            }
        }
        cout<<sum<<"\n";
    }



    return 0;
}
