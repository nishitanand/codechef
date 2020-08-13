#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        lli a[n];
        lli i;
        lli ans=0;
        for (i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        lli l=0,r=n-1;
        lli j;
        lli mid=(l+r+1)/2;
        lli flag=-2;
        while(l<=r)
        {
            if (a[mid]==m)
            {
                ans=-1;
                break;
            }
            if (m<a[mid])
            {
                r=mid-1;
                mid=(l+r+1)/2;
                flag=0;
            }
            else if (m>a[mid])
            {
                l=mid+1;
                mid=(l+r+1)/2;
                flag=1;
            }
        }
        if (ans==-1)
            cout<<ans<<endl;
        else
        {
            if (flag==1)
            {
                if (a[r]!=(m-1))
                    ans=-1;
                else
                {
                    ans+=(n-r);
                    for (j=r;j>0;j--)
                    {
                        if (a[j-1]==a[j]-1)
                        {
                            ans++;
                        }
                        else
                            break;
                    }
                }
            }
            if (flag==0)
            {
                if (a[l-1]!=(m-1))
                    ans=-1;
                else
                {
                    ans+=(n-l+1);
                    for (j=l-1;j>0;j--)
                    {
                        if (a[j-1]==a[j]-1)
                        {
                            ans++;
                        }
                        else
                            break;
                    }
                }
            }
            cout<<ans<<endl;
        }
    }



    return 0;
}
/*
2
8
5
0
2
3
4
7
9
10
9
7
5
0
2
3
4
6
7
*/
