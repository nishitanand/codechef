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
        if (n%2!=0)
        {
            lli i,j;
            lli num=1;
            for (i=0;i<n;i++)
            {
                for (j=0;j<n;j++)
                {
                    cout<<num<<" ";
                    num++;
                }
                cout<<"\n";
            }
        }
        else
        {
            lli i,j;
            lli num=1;
            for (i=0;i<n;i++)
            {
                num=(i*n)+1;
                for (j=0;j<n;j++)
                {
                    if (i%2==0)
                    {
                        cout<<num<<" ";
                        num++;
                    }
                    else if (i%2!=0)
                    {
                        lli k;
                        for (k=((i+1)*n);k>=((i*n)+1);k--)
                        {
                            cout<<k<<" ";
                        }
                        j+=(n-1);
                    }
                }
                cout<<"\n";
            }
        }
    }



    return 0;
}

