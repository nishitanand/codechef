#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli i;
        unordered_map <lli,lli> mx;
        unordered_map <lli,lli> my;
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
