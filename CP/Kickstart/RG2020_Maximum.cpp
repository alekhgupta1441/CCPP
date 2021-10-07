#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin >> t;
	ll ct=0;
	while(t--)
	{
		ct++;
		ll n;
		cin >> n;
		ll coin[n][n];
		ll coin_dp[n][n];
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<n;j++)
			{
				cin >> coin[i][j];
				//coin_dp[i][j]=0;
			}
		}
		// for(ll i=n-1;i>=0;i--)
		// {
		// 	for(ll j=0;j<n;j++)
		// 	{
		// 		int right_d= (j==n-1 || i==n-1)?0:coin_dp[i+1][j+1];
		// 		coin_dp[j][i]=coin[j][i]+right_d;
		// 	}
		// }
		// ll ans=coin_dp[0][0];
		// for(ll i=1;i<n;i++)
		// {
		// 	ans=max(ans, coin_dp[i][0]);
		// }
		ll ans=0;
		for(ll i=0;i<n;i++)
		{
				ll ii=i;
				ll jj=0;
				ll sum=0;
				while(ii<n && jj<n)
				{
					sum+=coin[ii][jj];
					ii++; jj++;
				}
				ans=max(ans, sum);
				ii=0;
				jj=i;
				sum=0;
				while(ii<n && jj<n)
				{
					sum+=coin[ii][jj];
					ii++; jj++;
				}
				ans=max(ans, sum);
		}
		cout << "Case #" << ct << ": " << ans << "\n";
	}
}