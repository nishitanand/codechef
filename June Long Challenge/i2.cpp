#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli n;
    cin>>n;
    char a[300];
    lli i;
    for (i=0;i<300;i++)
    {
        a[i]='A';
    }
    lli l=1,r=n;
    lli m=(l+r-1)/2;
    char ans;
    char ans2;
    lli k=0;
    while(l<=r)
    {
        cout<<m<<endl;
        cin>>ans;
        if (ans=='E')
            exit(0);
        else
            ans2=ans;
        cout<<m<<endl;
        cin>>ans;
        if (ans=='E')
            exit(0);
        a[k]=ans;
        k++;
        if (ans2=='G')
        {
            l=m+1;
            lli m=(l+r-1)/2;
        }
        else if (ans2=='L')
        {
            r=m-1;
            lli m=(l+r-1)/2;
        }
    }
    lli final1=m;
    l=1,r=n;
    m=(l+r-1)/2;
    i=0;
    char ans3;
    while(l<=r)
    {
        cout<<m<<endl;
        cin>>ans;
        if (ans=='E')
            exit(0);
        ans3=a[i];
        i++;
        if (ans3=='G')
        {
            l=m+1;
            lli m=(l+r-1)/2;
        }
        else if (ans3=='L')
        {
            r=m-1;
            lli m=(l+r-1)/2;
        }
    }
    lli final2=m;
    cout<<final1<<endl;
    cin>>ans;
    if (ans=='E')
        exit(0);
    cout<<final2<<endl;
    cin>>ans;
    if (ans=='E')
        exit(0);



    return 0;
}

