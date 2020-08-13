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


        for(i=0;i<n;i++)
        {
            cout<<it<<" ";
        }




        sort(v.begin(),v.end());
        lli first=0;
        for (auto it=v.end();it!=v.begin();it--)
        {
            //cout<<"it "<<" "<<"v[i] "<<*it<<" ";
            if (*(it-1)==*it)
            {
                if (it==v.end())
                {
                    cout<<"NO\n";
                    flag=1;
                    break;
                }
                if (*(it-2)==*it)
                {
                    cout<<"NO\n";
                    flag=1;
                    break;
                }
                else
                {
                    v.push_back(*(it-1));
                    v.erase(it-1);
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

