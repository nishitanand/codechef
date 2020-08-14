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
        if (x<(k+1))
            cout<<"0\n";
        else
        {
            if (k==1)
            {
                cout<<"1\n";
            }
            else
            {
                if (k==2)
                {
                    if (x%2==0)
                        cout<<"1\n";
                    else
                        cout<<"0\n";
                }

            }

        }

    }




    return 0;
}

