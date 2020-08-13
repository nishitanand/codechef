#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t;
    long double p,q,r,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>p>>q>>r>>a>>b>>c;
        lli d1,d2,d3;
        long double m1,m2,m3;
        d1=a-p;
        d2=b-q;
        d3=c-r;
        m1=a/p;
        m2=b/q;
        m3=c/r;
        lli ans=3;
        if (((d1==0)&&(d2==0))&&(d3==0))
        {
            ans=0;
        }
        else
        {
            if (d1==0)
            {
                ans--;
                if ((d2==0)||(d3==0))
                {
                    ans--;
                }
                else if (d2==d3)
                {
                    ans--;
                }
            }
            else if (d2==0)
            {
                ans--;
                if ((d1==0)||(d3==0))
                {
                    ans--;
                }
                else if (d1==d3)
                {
                    ans--;
                }
            }
            else if (d3==0)
            {
                ans--;
                if ((d1==0)||(d2==0))
                {
                    ans--;
                }
                else if (d1==d2)
                {
                    ans--;
                }
            }
            else
            {
                if (d1==d2)
                {
                    ans--;
                    if (d2==d3)
                    {
                        ans--;
                    }
                }
                else if (d2==d3)
                {
                    ans--;
                }
                else if (d1==d3)
                {
                    ans--;
                }
                /*else if (m1==m2)
                {
                    ans--;
                    if (m2==m3)
                    {
                        ans--;
                    }
                }
                else if (m2==m3)
                {
                    ans--;
                }
                else if (m1==m3)
                {
                    ans--;
                }*/


            }
        }
        cout<<ans<<"\n";



    }



    return 0;
}

