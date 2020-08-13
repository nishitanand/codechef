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
        lli sizee=s.length();
        vector <lli> a (sizee,0);
        //memset(a,lli,sizeof(a));
        lli i;
        lli flag=0;
        for (i=0;i<sizee;i++)
        {
            if (flag==1)
                {
                    if (s[i]=='(')
                        a[i]=a[i-1]+1;
                    else if (s[i]==')')
                    {
                            if (flag==0)
                                a[i]=0;
                            else if (a[i-1]==0)
                                a[i]=0;
                            else
                                a[i]=a[i-1]-1;
                    }


                }
            else if (flag==0 && s[i]=='(')
            {
                flag=1;
                a[i]=1;
            }
        }

        map <lli,lli> m;


        for (i=0;i<sizee;i++)
            cout<<a[i]<<" ";



        lli q;
        cin>>q;
        lli t;
        while(q--)
        {
            cin>>t;
            flag=0;
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

/*

1
))()()))(()))((()(())
1
1

*/

