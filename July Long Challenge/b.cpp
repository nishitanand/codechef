#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli i;
        lli c=0,m=0;
        lli s1=0,s2=0;
        for (i=0;i<n;i++)
        {
            cin>>a>>b;
            s1=0;
            s2=0;
            while(a>0)
            {
                s1+=a%10;
                a/=10;
            }
            while(b>0)
            {
                s2+=b%10;
                b/=10;
            }
            //cout<<" I "<<i<<" S1 "<<s1<<" S2 "<<s2<<" ";
            if (s1>s2)
                c++;
            else if (s2>s1)
                m++;
            else if (s1==s2)
            {
                c++;
                m++;
            }

            //cout<<" C "<<c<<" M "<<m<<" ";
        }
        if (c>m)
            cout<<"0 "<<c<<"\n";
        else if (m>c)
            cout<<"1 "<<m<<"\n";
        else
            cout<<"2 "<<c<<"\n";



    }




    return 0;
}
