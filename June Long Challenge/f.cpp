#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>p;
        lli i,j,x;
        lli a[n][n];
        for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++)
            {
                cout<<"1 "<<i<<" "<<j<<" "<<i<<" "<<j<<endl;
                cin>>x;
                if (x!=-1)
                {
                    a[i][j]=x;
                }
                else if (x==-1)
                    exit(0);
            }
        }
        cout<<"2"<<endl;
        for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        lli x2;
        cin>>x2;
        if (x2==1)
            continue;
        else if (x2==-1)
            exit(0);

    }



    return 0;
}

