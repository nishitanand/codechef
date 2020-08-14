#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n,i,j,tm;
    char m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[4][4]={0};
        /*for (i=0;i<4;i++)
        {
            for (j=0;j<4;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }*/
        for (i=0;i<n;i++)
        {
            cin>>m>>tm;
            if (m=='A')
            {
                if (tm==12)
                {
                    a[0][0]++;
                }
                if (tm==3)
                {
                    a[0][1]++;
                }
                if (tm==6)
                {
                    a[0][2]++;
                }
                if (tm==9)
                {
                    a[0][3]++;
                }
            }
            if (m=='B')
            {
                if (tm==12)
                {
                    a[1][0]++;
                }
                if (tm==3)
                {
                    a[1][1]++;
                }
                if (tm==6)
                {
                    a[1][2]++;
                }
                if (tm==9)
                {
                    a[1][3]++;
                }
            }
            if (m=='C')
            {
                if (tm==12)
                {
                    a[2][0]++;
                }
                if (tm==3)
                {
                    a[2][1]++;
                }
                if (tm==6)
                {
                    a[2][2]++;
                }
                if (tm==9)
                {
                    a[2][3]++;
                }
            }
            if (m=='D')
            {
                if (tm==12)
                {
                    a[3][0]++;
                }
                if (tm==3)
                {
                    a[3][1]++;
                }
                if (tm==6)
                {
                    a[3][2]++;
                }
                if (tm==9)
                {
                    a[3][3]++;
                }
            }
        }
        for (i=0;i<4;i++)
            {
                for (j=0;j<4;j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        int b[4][2];
        int loss=0;
        int lo[4]={0};
        for (i=0;i<4;i++)
        {
            int sum=0
            int maxcol=-1;
            int maxcoltime=0;
            for (j=0;j<4;j++)
            {
                sum+=a[i][j]
                if ((a[i][j])>maxcol)
                {
                    maxcol=a[i][j];
                    maxcoltime=j;
                }
                b[i][0]=maxcoltime;
                b[i][1]=maxcol;
            }
            if (sum==0)
                {
                    loss-=200;
                    lo[i]=-1;
                }


        }
        for (i=0;i<4;i++)
        {
            for (j=0;j<2;j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
        if (loss==-800)
            {
                cout<<loss<<"\n";
                continue;
            }
        int maxppl=-1;
        for (i=0;i<4;i++)
        {
            if (b[i][1]>maxppl)
            {
                maxppl=b[i][1];
                maxshow=i;
            }
        }
    }




    return 0;
}
