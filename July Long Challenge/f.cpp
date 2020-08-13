#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n,xno;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector <lli> vec(n);
        cin>>xno;
        lli i;
        lli k;
        for (k=0;k<n;k++)
        {
            cin>>vec[k];
        }
        sort(vec.begin(),vec.end());
        vector <lli>::iterator itx=lower_bound(vec.begin(),vec.end(),xno);
        lli z=0;
        lli lowb=itx-vec.begin();
        lli j;
        for (j=lowb;j<n;j++)
        {
            if (xno<vec[j])
            {
                while(xno<vec[j])
                {
                    xno*=2;
                    z++;
                }
                z++;
            }
            else
            {
                z++;
            }
            xno=vec[j]*2;
        }
        lli totalans=lowb+z;

        if (lowb!=0)
        {
            lowb--;
            z=0;
            for (j=lowb;j<n;j++)
            {
                if (xno<vec[j])
                {
                    while(xno<vec[j])
                    {
                        xno*=2;
                        z++;
                    }
                    z++;
                }
                else
                {
                    z++;
                }
                xno=vec[j]*2;
            }
            lli g=lowb+z;
            lli finalans=min(totalans,g);
            cout<<finalans<<"\n";
        }
        else
        {
            cout<<totalans<<"\n";
        }



    }




    return 0;
}
