#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli binarysearch(vector<lli> a,lli s,lli low,lli high, lli mid)
{

    //cout<<"S"<<s<<"LOW"<<low<<"HIGH"<<high<<"MID"<<a[mid]<<" ";
    if (s==a[mid])
    {
        //cout<<"YAY";
        return a[mid];
    }
    if (low==(high-1))
    {
        //cout<<"YIPEE";
        return a[mid];
    }
    if (s>a[mid])
    {
        low=mid;
        mid=(low+high)/2;
        return binarysearch(a,s,low,high,mid);
    }
    else if (s<a[mid])
    {
        high=mid;
        mid=(low+high)/2;
        return binarysearch(a,s,low,high,mid);
    }
}

int main()
{
    lli n,q,i,s,d,ans,low,high,mid;
    cin>>n>>q;
    //lli a[n];
    vector <lli> a;
    for (i=0;i<n;i++)
    {
        cin>>d;
        a.push_back(d);
    }
    sort(a.begin(),a.end());
    /*for (i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }*/
    for (i=0;i<q;i++)
    {
        cin>>s;
        low=0;
        high=n-1;
        mid=(low+high)/2;
        if (s<a[low])
            ans=-1;
        else if (s==a[low])
            ans=a[low];
        else if (s>=a[high])
            ans=a[high];
        else
            ans=binarysearch(a,s,low,high,mid);
        cout<<ans<<"\n";
    }



    return 0;
}
