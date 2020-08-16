#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,n;
    cin>>t;
    while(t--)
    {
        lli x,y;
        x=0;
        y=0;
        cin>>n;
        string s;
        cin>>s;
        lli i;
        for (i=0;i<n;i++)
        {
            //cout<<"I"<<i<<"\n";
            //cout<<"S[i]"<<s[i]<<"\n";
            if (s[i]=='L')
            {
                x--;
                i++;
                while((s[i]=='L')||(s[i]=='R'))
                {
                    i++;
                }
                i--;
                continue;
            }
            if (s[i]=='R')
            {
                x++;
                i++;
                while((s[i]=='L')||(s[i]=='R'))
                {
                    i++;
                }
                i--;
                continue;
            }
            if (s[i]=='U')
            {
                y++;
                i++;
                while((s[i]=='U')||(s[i]=='D'))
                {
                    i++;
                }
                i--;
                continue;
            }
            if (s[i]=='D')
            {
                y--;
                i++;
                while((s[i]=='U')||(s[i]=='D'))
                {
                    i++;
                }
                i--;
                continue;
            }
        }
        cout<<x<<" "<<y<<"\n";
    }


    return 0;
}
