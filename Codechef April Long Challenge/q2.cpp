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
        lli i;
        lli a[n];
        for (i=0;i<n;i++)
        {
            cin>>a[i];
        }
        lli count=0;
        int flag=0;
        lli count1=0;
        for (i=0;i<n;i++)
        {
            if (a[i]==1)
                count1++;
        }
        if (count1==1)
        {
            cout<<"YES\n";
            continue;
        }
        for (i=0;i<n;i++)
        {
            if (a[i]==1)
            {
                count=0;
                i+=1;
                while(a[i]==0)
                {
                    count++;
                    i++;
                }
                i--;
                if (count<5)
                {
                    flag=1;
                    cout<<"NO\n";
                    break;
                }
            }
        }
        if (flag==1)
            continue;
        if (flag==0)
            cout<<"YES\n";
    }
    return 0;
}
