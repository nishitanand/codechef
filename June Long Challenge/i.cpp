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
    char ans='s';
    char ans2;
    lli k=0;
    while(ans!='E')
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



    return 0;
}

















while (l <= r) {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
