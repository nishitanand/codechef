#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n,k;
    cin>>t;
    while(t--)
    {

        cin>>n>>k;
        lli a[n];
        lli max=0;
        lli i;
        for (i=0;i<n;i++)
        {
            cin>>a[i];
            if (a[i]>max)
                max=a[i];
        }
        lli ans=0;
        lli x=1;
        lli sum=0;
        lli maxsum=0;
        if (k==1)
        {
            while(x<=max)
            {
                sum=0;
                for (i=0;i<n;i++)
                {
                    sum+=(x&a[i]);
                }
                //cout<<sum<<" ";
                if (sum>maxsum)
                {
                    maxsum=sum;
                    ans=x;
                }
                x=x<<1;
            }
            cout<<ans<<"\n";
            continue;
        }

        if (k==2)
        {
            x=2;
            while(x<=max)
            {
                x=x<<1;
                while(x<=max)
                {
                    x++;
                    sum=0;
                    for (i=0;i<n;i++)
                    {
                        sum+=(x&a[i]);
                    }
                    //cout<<sum<<" ";
                    if (sum>maxsum)
                    {
                        maxsum=sum;
                        ans=x;
                    }
                    x=x<<1;
                }
            }
            cout<<ans<<"\n";
        }




    }



    return 0;
}

