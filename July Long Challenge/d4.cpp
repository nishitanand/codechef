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
        //unordered_map <lli,lli> mx;
        //unordered_map <lli,lli> my;
        lli ansx=0,ansy=0;
        for (i=1;i<(4*n);i++)
        {
            cin>>x>>y;
            ansx=ansx^x;
            ansy=ansy^y;
            /*
            mx[x]++;
            my[y]++;
            lli x1=mx[x];
            lli y1=my[y];
            cout<<" x "<<x<<" y "<<y;
            cout<<" xfreq "<<x1<<" yfreq "<<y1;
            if (mx[x]%2!=0)
                ansx=x;
            else
                ansx=0;
            if (my[y]%2!=0)
                ansy=y;
            else
                ansy=0;
            cout<<" ansx "<<ansx<<" "<<" ansy "<<ansy<<"\n";
            */
        }
        cout<<ansx<<" "<<ansy<<"\n";


    }




    return 0;
}
