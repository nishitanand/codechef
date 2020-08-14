#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // Complete the code.
    int a;
    long long b;
    char c;
    float d;
    double e;
    /*scanf("%d",&a);
    scanf("%ld",&b);
    scanf("%c",&c);
    scanf("%f",&d);
    scanf("%lf",&e);
    */
    //scanf("%d%ld%c%f%lf",&a,&b,&c,&d,&e);


    /*printf("%d",a);
    printf("\n");
    printf("%ld",b);
    printf("\n");
    printf("%c",c);
    printf("\n");
    printf("%f",d);
    printf("\n");
    printf("%lf",e);
    printf("\n");
    */
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl<<b<<endl<<c<<endl;
    std::cout<<std::fixed;
    cout<<std::setprecision(3)<<d;
    cout<<endl;
    cout<<std::setprecision(9)<<e;
    cout<<endl;




    return 0;
}
