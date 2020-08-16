#include <bits/stdc++.h>
using namespace std;

int main() {


int t,a,b;
cin>>t;
while(t--)
{
    cin>>a>>b;
    int sum1,sum2,sum3;
    sum1=a+b;
    //cout<<" SUM1 "<<sum1<<" ";
    int a1,a2,b1,b2;
    int atwo,btwo,athree,bthree,max;
    if ((a>9)&&(b>9))
    {
        a1=a/10;
        a2=a%10;
        b1=b/10;
        b2=b%10;
        atwo=a1*10+b1;
        btwo=a2*10+b2;
        sum2=atwo+btwo;
        athree=b2*10+a2;
        bthree=b1*10+a1;
        sum3=athree+bthree;
        //cout<<" SUM2 "<<sum2<<" SUM3 "<<sum3<<" ";
        if (sum2>=sum3)
            max=sum2;
        else
            max=sum3;
        if (sum1>max)
            max=sum1;
        cout<<max<<"\n";
        continue;
    }
    if ((a<=9)&&(b<=9))
    {
        cout<<sum1<<"\n";
        continue;
    }
    if ((a<=9)&&(b>9))
    {
        b1=b/10;
        b2=b%10;
        btwo=a*10+b2;
        a1=b1;
        sum2=a1+btwo;
        //cout<<" SUM1 "<<sum1<<" SUM2 "<<sum2<<" ";
        if (sum1>=sum2)
            max=sum1;
        else
            max=sum2;
        cout<<max<<"\n";
        continue;
    }
    if ((b<=9)&&(a>9))
    {
        a1=a/10;
        a2=a%10;
        atwo=b*10+a2;
        b1=a1;
        sum2=atwo+b1;
        //cout<<" SUM1 "<<sum1<<" SUM2 "<<sum2<<" ";
        if (sum1>=sum2)
            max=sum1;
        else
            max=sum2;
        cout<<max<<"\n";
        continue;
    }



}


	return 0;
}
