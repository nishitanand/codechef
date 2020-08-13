#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n,s;
    cin>>t;
    while(t--)
    {
        lli ans=0;
        cin>>s>>n;
        if (s==1)
            ans=1;
        else
        {
            if (s<=n)
            {
                if (s%2==0)
                    ans=1;
                else
                    ans=2;
            }
            else if (s>n)
            {
                if (s%n==0)
                    ans=s/n;
                else
                {
                    if (s%2==0)
                        ans=(s/n)+1;
                    else if (s%2!=0)
                    {
                        ans=s/n;
                        lli dif=s-(ans*n);
                        if (dif==1)
                            ans++;
                        else
                        {
                            ans+=2;
                        }
                    }
                }


            }

        }
        cout<<ans<<"\n";




    }



    return 0;
}

