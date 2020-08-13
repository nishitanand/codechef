#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli testc;
    cin>>testc;
    while(testc--)
    {
        string s;
        cin>>s;
        lli q;
        cin>>q;
        lli i,t;
        while(q--)
        {
            cin>>t;
            lli flag=0;
            i=t-1;
            lli ans=-1;
            while(i<s.length())
            {
                if (flag==1)
                {
                    if (s[i]=='(')
                        ans++;
                    else if (s[i]==')')
                        ans--;
                    if (ans==0)
                        break;

                }
                if (flag==0 && s[i]=='(')
                {
                    flag=1;
                    ans=1;
                }
                i++;
            }
            i++;
            if (i==(s.length()+1))
                cout<<"-1\n";
            else
                cout<<i<<"\n";

            /*
            for (i=t-1;i<s.length;i++)
            {
                if (s[i]=='(')
                {
                    if (flag==0)
                    {
                        flag=1;
                    }

                }
            }
            */
        }






    }



    return 0;
}

