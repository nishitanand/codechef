#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	lli t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		lli i;
		lli ans=0;
		lli a[n];
		cin>>a[0];
		for (i=1;i<n;i++)
		{
			cin>>a[i];
			ans+=abs(a[i-1]-a[i])-1;
		}
		cout<<ans<<"\n";
	}




	return 0;
}