#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        lli len=s.length();
        lli i;
        lli ans=0;
        if (len==1)
            ans=0;
        else
        {
            int flip=0;
            for (i=1;i<len;i++)
            {
                if (((s[i-1]=='x')&&(s[i]=='y'))||((s[i-1]=='y')&&(s[i]=='x')))
                {
                    ans+=1;
                    i++;
                }
            }
        }
        cout<<ans<<"\n";

    }



    return 0;
}
