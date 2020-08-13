#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli i;
        lli a5=0,a10=0,a15=0;
        lli c[n];
        int flag=0;
        for (i=0;i<n;i++)
        {
            cin>>c[i];
            if (c[i]==5)
                {
                    a5+=1;
                }
            else if (c[i]==10)
            {
                if (a5>=1)
                {
                    a10+=1;
                    a5-=1;
                }
                else
                {
                    flag=1;
                }
            }
            else if (c[i]==15)
            {
                if (a10>=1)
                {
                    a15+=1;
                    a10-=1;
                }
                else if (a5>=2)
                {
                    a15+=1;
                    a5-=2;
                }
                else
                {
                    flag=1;
                }
            }
        }
        if (flag==1)
            cout<<"NO\n";
        else if (flag==0)
            cout<<"YES\n";


    }



    return 0;
}
