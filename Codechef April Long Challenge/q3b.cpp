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
            else if (k==2)
            {
                //lli ad=((k+1)*2)+k+1;
                //if ((x%2==0)||(ad==x))
                    cout<<"1\n";
                //else
                  //  cout<<"0\n";
            }
        }
    }
    return 0;
}
