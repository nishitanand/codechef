#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,n,p,i,d,coin,coinval,coinindex,noofcoin;
    int flag=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>p;
        lli den[n];
        flag=0;
        for (i=0;i<n;i++)
        {
            cin>>d;
            den[i]=d;
            if (p%d!=0)
            {
                flag=1;
                coinval=d;
                coinindex=i;
            }
        }
        if (flag==0)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        noofcoin=p/d;
        noofcoin+=1;
        //den[coinindex]=noofcoin;
        cout<<"YES ";
        for (i=0;i<coinindex;i++)
        {
            cout<<"0 ";
        }
        cout<<noofcoin<<" ";
        for (i=(coinindex+1);i<n;i++)
        {
            cout<<"0 ";
        }
        cout<<"\n";
    }



    return 0;
}
