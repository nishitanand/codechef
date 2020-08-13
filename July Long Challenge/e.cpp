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

        lli i,j;
        map <lli,lli> ma;
        map <lli,lli> mb;
        cin>>n;
        map <lli,lli> mtotal;
        //lli ansx=0,ansy=0;
        vector <lli> a(n);
        lli flag=0;
        vector <lli> b(n);
        for (j=0;j<n;j++)
        {
            cin>>a[j];
            ma[a[j]]++;
            mtotal[a[j]]++;
        }
        for (j=0;j<n;j++)
        {
            cin>>b[j];
            mb[b[j]]++;
            mtotal[b[j]]++;
        }
        lli k;

        for (auto k: mtotal)
        {
            if (k.second%2!=0)
            {
                flag=1;
                break;
            }
        }
        sort(a.begin(),a.end());
        lli flag2=0;
        sort(b.begin(),b.end());
        for (k=0;k<n;k++)
        {
            if (a[k]!=b[k])
            {
                flag2=1;
                break;
            }

        }
        lli count=0;
        if (flag==1)
            cout<<"-1\n";
        else if (flag2==0)
            cout<<"0\n";
        else
        {
            map <lli,lli> map1;
            map <lli,lli> map2;
            lli maxi=INT_MAX;
            count=0;
            vector <lli> da;
            for (j=0;j<n;j++)
            {
                maxi=min(maxi,a[j]);
            }
            for (k=0;k<n;k++)
            {
                maxi=min(maxi,b[k]);
            }
            for (auto k:ma)
            {
                if (k.second>mb[k.first])
                {
                    lli abc=(k.second-mb[k.first])/2;
                    map1[k.first]=abc;
                }
            }
            vector <lli> db;
            for (auto k:mb)
            {
                if (k.second>ma[k.first])
                {
                    lli acd=(k.second-ma[k.first])/2;
                    map2[k.first]=acd;
                }
            }
            for (auto k:map1)
            {
                for (i=0;i<k.second;i++)
                {
                    da.push_back(k.first);
                }
            }
            sort(da.begin(),da.end());
            for (auto k:map2)
            {
                for (i=0;i<k.second;i++)
                {
                    db.push_back(k.first);
                }
            }
            sort(db.begin(),db.end(),greater <lli>() );
            for (j=0;j<da.size();j++)
            {
                lli q1=da[j];
                lli q2=db[j];
                count+=min((min(q1,q2)),2*maxi);
            }
            cout<<count<<"\n";

        }



    }




    return 0;
}
