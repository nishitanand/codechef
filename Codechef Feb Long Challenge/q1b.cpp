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
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for (i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }


    }


    return 0;
}
