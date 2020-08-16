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
        i=0;
        lli j=n-1;
        int flag1=0;
        int flag2=0;
        lli idx1,idx2;
        while(i<=j)
        {
            //cout<<"I"<<i<<" "<<"J"<<j<<endl;
            if (a[i]==max)
            {
                idx1=i;
                flag1=1;
            }
            if (a[j]==max)
            {
                idx2=n-1-j;
                flag2=1;
            }
            if ((a[i]==max)&&(a[j]==max))
                break;


            if (flag1==0)
                i++;
            if (flag2==0)
                j--;

        }
        if ((idx1+idx2)>=(n/2))
            cout<<idx2<<"\n";
        else
        cout<<"0"<<"\n";








    }


    return 0;
}
