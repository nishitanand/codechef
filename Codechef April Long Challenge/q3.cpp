#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,x,k;
    cin>>t;
    vector <lli> v;
    while(t--)
    {
        cin>>x>>k;
        if (x<(k+2))
            cout<<"0\n";
        else
        {
            if (k==1)
            {
                cout<<"1\n";
            }
            else
            {
                lli ans=pow(2,k);
                //cout<<"ANS"<<ans<<" ";
                if (x<ans)
                    cout<<"0\n";
                else
                {
                    lli abc=x;
                    abc-=k;
                    lli def=(k-1)*2;
                    if (x%def==0)
                        cout<<"1\n";
                    else
                        cout<<"0\n";
                }

            }

        }

    }




    return 0;
}

