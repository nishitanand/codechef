#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli i,a[n];
        lli flag=0;
        for (i=0;i<n;i++)
        {
            cin>>a[i];
            if (a[i]%2==0)
                flag=1;
        }
        if (flag==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";






    }



    return 0;
}

