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
        vector<lli> v(n);
        lli i;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for (i=n-1;i>0;i--)
        {
            cout<<v[i]<<" ";
            if (v[i-1]==v[i])
            {
                if (v[i-2]==v[i])
                {
                    cout<<"NO\n";
                    flag=1;
                    break;
                }
                else
                {
                    v.push_back(v[i-1]);
                    v.erase(v.begin()+i-1);
                }
            }
        }
        if (flag==0)
        {
            cout<<"YES\n";
            for(auto it: v)
                cout<<it<<" ";
            cout<<"\n";
        }





    }



    return 0;
}

