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
        lli flag=0;
        cin>>n;
        lli a;
        vector<lli> v;
        lli i;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }

        sort(v.begin(),v.end());


        for(i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";




    }



    return 0;
}

