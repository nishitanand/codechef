#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,n,i,sum,inp;
    cin>>t;
    while (t--)
    {
        sum=0;
        cin>>n;
        vector <lli> a;
        vector <lli> b;
        for (i=0;i<n;i++)
        {
            cin>>inp;
            a.push_back(inp);
        }
        for (i=0;i<n;i++)
        {
            cin>>inp;
            b.push_back(inp);
        }
        if ((a[0]==a[1])&&(b[0]==b[1]))
        {
            if (a[0]<=b[0])
                sum=n*a[0];
            else
                sum=n*b[0];
        }

        cout<<sum<<"\n";


    }


    return 0;
}
