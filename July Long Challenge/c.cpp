#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,k;
    cin>>t;
    while(t--)
    {
        cin>>k;
        lli i,j;
        lli r=k/8;
        lli c=k%8;
        for (i=1;i<=8;i++)
        {
            for (j=1;j<=8;j++)
            {
                if (i==1 && j==1)
                {
                    cout<<"O";
                }
                else if (i<=r)
                    cout<<".";
                else if (i==(r+1)&&j<=c)
                    cout<<".";
                else
                    cout<<"X";



            }
            cout<<"\n";
        }
    }




    return 0;
}
