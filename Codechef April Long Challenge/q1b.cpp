#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli a[n];
        lli s,i;
        lli count=0;
        lli zerocount=0;
        for (i=0;i<n;i++)
        {
            cin>>s;
            //cout<<" S "<<s;
            if (s!=0)
            {
                a[i-zerocount]=s;
                //cout<<" aa[i] "<<a[i-zerocount];
                count++;
            }
            else
                zerocount++;
        }
        //cout<<" COUNT "<<count<<" ZEROCOUNT "<<zerocount;

        /*for (i=0;i<count;i++)
        {
            cout<<" array a[i] "<<i<<" "<<a[i];
        }*/
        //cout<<" COUNT "<<count<<" ZEROCOUNT "<<zerocount;
        if (zerocount==n)
        {
            cout<<"0\n";
        }
        else
        {
            sort(a,a+count);
            lli ans=0;
            for (i=count-1;i>=0;i--)
            {
                //cout<<" ans1 "<<ans;
                //cout<<" A[i] "<<a[i];
                //ans+=(a[i]-i);
                lli ar=a[i]-(count-1)+i;
                if (ar>0)
                {
                    ans+=ar;
                }
                //cout<<" ans2 "<<ans;
            }
            cout<<ans<<"\n";
        }



    }






    return 0;
}
