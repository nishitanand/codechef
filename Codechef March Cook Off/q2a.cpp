#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli a[n];
        lli b[n];
        lli s;
        lli i;
        for (i=0;i<n;i++)
        {
            cin>>s;
            a[i]=s;
            b[i]=s;
        }
        sort(b,b+n);
        lli max=b[n-1];
        lli count=0;
        lli flag=0;
        lli first=0;
        lli last=0;
        lli maxcount=0;
        for (i=0;i<n;i++)
        {
            if (a[i]!=max)
            {
                count++;
                //cout<<"count"<<count<<" ";
            }

            else
            {
                maxcount++;
                if (first==0)
                    first=count;
                count=0;
                //cout<<"FIRST"<<first<<" ";
            }
            if (count>=(n/2))
            {
                flag=1;
                if (maxcount==1)
                    cout<<(count)<<"\n";
                else
                    cout<<(count-(n/2))<<"\n";

                break;
            }
        }
        last=count;
        //cout<<"first"<<first<<" "<<"last"<<last<<" ";
        if (flag==0)
        {
            if ((first+last)>=(n/2))
            {
                lli sub=(n/2)-1-first;
                if (sub<0)
                    sub=0;
                lli ans=last-sub;
                cout<<ans<<"\n";
            }

            else
            {
                cout<<"0"<<"\n";
            }
        }


    }










    return 0;
}
