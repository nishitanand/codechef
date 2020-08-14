#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,n,k,i,val,sumrem,rem,rr,flag,m,newsum,mint=INT_MAX;
    cin>>t;
    while(t--)
    {
        sumrem=0;
        newsum=0;
        mint=INT_MAX;
        flag=0;
        cin>>n>>k;
        lli a[4][n];
        for (i=0;i<n;i++)
        {
            cin>>val;
            a[0][i]=val;
            rem=val%k;
            a[1][i]=rem;
            sumrem+=rem;
            a[2][i]=sumrem;
            rr=k-rem;
            a[3][i]=rr;
        }
        /*for (i=0;i<n;i++)
        {
            cout<<a[0][i]<<" "<<a[1][i]<<" "<<a[2][i]<<" "<<a[3][i]<<"\n";
        }*/
        for (i=n-1;i>0;i--)
        {
            newsum+=a[3][i];
            //cout<<a[2][i]<<" "<<newsum;
            m=(a[2][i-1])-(newsum);
            //cout<<"M "<<m<<" ";
            if (m>=0)
            {
                if (m<mint)
                {
                    flag=1;
                    mint=m;
                }
            }
        }
        if (flag==0)
        {
            mint=a[2][n-1];
        }
        cout<<mint<<"\n";



    }



    return 0;
}
