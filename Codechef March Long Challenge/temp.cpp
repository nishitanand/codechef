#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,n,m,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        lli f[n],p[n],a[m+1];
        for (i=0;i<n;i++)
        {
            cin>>f[i];
        }
        for (i=0;i<m+1;i++)
        {
            a[i]=-1;
        }
        for(i=0;i<n;i++)
        {
            cin>>p[i];
            if (a[f[i]]==-1)
                a[f[i]]+=1;
            a[f[i]]+=p[i];
        }
        lli min=INT_MAX;
        for(i=0;i<m+1;i++)
        {
            //cout<<a[i]<<" ";
            if ((a[i]>=0)&&(a[i]<min))
                min=a[i];
            //cout<<"MIN"<<min<<" ";
        }
        if (min==INT_MAX)
            min=0;
        cout<<min<<"\n";
    }



    return 0;
}
