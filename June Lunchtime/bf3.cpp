#include<bits/stdc++.h>
using namespace std;

#define lli long long int

bool cmp(pair<lli, lli>& a,
         pair<lli, lli>& b)
{
    return a.second > b.second;
}


lli sort(map<lli, lli>& m)
{


    vector<pair<lli, lli> > A;


    for (auto& it : m) {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);

    for (auto& it : A) {

        if (it.second>=3)
            return 3;
    }
    return 0;
}



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
        map<lli,lli> m;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            m[a]++;
        }

        lli abc=sort(m);
        if (abc==3)
        {
            cout<<"NO1\n";
            continue;
        }
        //auto it=m.lower_bound(3);
        //cout<<it->first<<" "<<it->second;
        lli la=v.size()-1;
        lli last=v[la];
        sort(v.begin(),v.end());
        if (m[last]>=2)
        {
            cout<<"NO2\n";
            continue;
        }

        vector <lli> v2;
        i=0;
        lli j=n-1;

        for (auto it=m.begin();it!=m.end();it++)
        {
            //cout<<it->first<<" "<<it->second;
            if (it->second==1)
            {
                v2[i]=it->first;
                i++;
            }
            else if (it->second==2)
            {
                v2[i]=it->first;
                i++;
                v2[j]=it->first;
                j--;
            }
        }


        cout<<"YES\n";
        for(auto it: v2)
            cout<<it<<" ";
        cout<<"\n";


        /*
        for (i=v.size()-1;i>0;i--)
        {
            //cout<<"i "<<i<<" v[i] "<<v[i]<<" ";
            if (v[i-1]==v[i])
            {
                if (i==v.size()-1)
                {
                    cout<<"NO\n";
                    flag=1;
                    break;
                }
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

        */




    }



    return 0;
}





















