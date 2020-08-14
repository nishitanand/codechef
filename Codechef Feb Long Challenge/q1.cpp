#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,n,i,sum;
    cin>>t;
    while (t--)
    {
        sum=0;
        cin>>n;
        lli a[n];
        lli b[n];
        for (i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for (i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for (i=0;i<n;i++)
        {
            if (a[i]<=b[i])
            {
                sum+=a[i];
            }
            else
                sum+=b[i];
        }
        cout<<sum<<"\n";


    }


    return 0;
}
