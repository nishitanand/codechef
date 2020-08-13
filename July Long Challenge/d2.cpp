#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,n,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli i;
        unordered_set < pair <lli,lli> > mx;
        set < pair <lli,lli> > my;
        for (i=1;i<(4*n);i++)
        {
            cin>>x>>y;
            mx[x]++;
            my[y]++;
        }
        lli ansx=0,ansy=0;
        for (auto s:mx)
        {
            if (s.second%2!=0)
            {
                ansx=s.first;
                break;
            }
        }
        for (auto s:my)
        {
            if (s.second%2!=0)
            {
                ansy=s.first;
                break;
            }
        }
        cout<<ansx<<" "<<ansy<<"\n";


    }




    return 0;
}
