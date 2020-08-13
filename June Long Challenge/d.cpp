/*
Input
8
1
11
24
12
32
68
73
74
*/
#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,ts;
    cin>>t;
    while(t--)
    {
        cin>>ts;
        lli js;
        lli ans=0;
        if (ts%2!=0)
        {
            ans=ts/2;
        }
        else
        {
            if (__builtin_popcount(ts)==1)
            {
                ans=0;
            }
            else
            {
                lli x=ts;
                lli count=0;
                while ((x&1)==0)
                {
                    x=x>>1;
                    count++;
                }
                count+=1;
                ans=ts>>count;
            }
        }
        cout<<ans<<"\n";
    }



    return 0;
}

