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
        lli i,a[n];
        lli flag=0;
        set <lli> s;
        for (i=0;i<n;i++)
        {
            cin>>a[i];
            //s.insert(a[i]);
        }
        lli q;
        cin>>q;
        lli x,y,sum;
        while(q--)
        {
            cin>>x>>y;
            sum=x+y;
            if (sum==0)
            {
                cout<<"0\n";
                continue;
            }
            else
            {
                lli ans=binary_search(a,a+n,sum);
                if (ans)
                {
                    cout<<"-1\n";
                    continue;
                }
                else
                {
                    for (i=0;i<n;i++)
                    {
                        if (a[i]>sum)
                            break;
                    }

                    //auto it=s.lower_bound(sum);
                    //lli dist=std::distance(s.begin(),it);
                    cout<<i<<"\n";
                }
            }
        }






    }



    return 0;
}

