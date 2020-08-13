#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n,b,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>b>>m;
        lli a[m];
        lli i;
        lli ans=0;
        lli nb=0;
        int flag=0;
        if (n%b==0)
        {
            nb=n/b;
        }
        else
        {
            nb=(n/b)+1;
            flag=1;
        }
        lli cbno[m];
        //cout<<" N "<<n<<" B "<<b<<" M "<<m<<" ANS "<<ans<<" NB "<<nb<<" FLAG "<<flag<<" ";
        for (i=0;i<m;i++)
        {
            cin>>a[i];
            //cout<<" I "<<i<<" A[I] "<<a[i]<<" ANS "<<ans<<" FLAG "<<flag<<" ";
            if (i==0)
            {
                ans++;
                if (flag==1)
                {
                    cbno[i]=a[i]/b;
                }
                else
                    cbno[i]=a[i]/b;
                //cout<<" CBNO "<<cbno[i]<<" ANS "<<ans<<" ";
                continue;
            }
            if (flag==1)
            {
                cbno[i]=a[i]/b;
            }
            else
                cbno[i]=a[i]/b;
            if (cbno[i]!=cbno[i-1])
            {
                ans++;
            }
            //cout<<" CBNO "<<cbno[i]<<" ANS "<<ans<<" ";
        }
        cout<<ans<<"\n";

    }



    return 0;
}

