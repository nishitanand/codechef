#include <iostream>
#include <cstdio>
using namespace std;
int max_of_four(int a,int b, int c, int d){
    if (a>b && a>c && a>d)
        return a;
    if (b>a && b>c && b>d)
        return b;
    if (c>a && c>b && c>d)
        return c;
    if (d>a && d>b && d>c)
        return d;
    }
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
