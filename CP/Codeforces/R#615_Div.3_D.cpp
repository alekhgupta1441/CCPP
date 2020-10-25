        #include<bits/stdc++.h>
        using namespace std;
        #define ll long long
        int main()
        {
        	ll q,x;
        	cin >> q >> x;
        	ll arr[400005]={0};
        	ll dp[400005]={0};
        	for(ll i=0;i<400005;i++)
        		dp[i]=i;
        	ll gr=0;
        	for(ll i=0;i<q;i++) 
        	{
        		ll y;
        		cin >> y;
        		ll mod=y%x;
                if(dp[mod]<400005)
        		arr[dp[mod]]=1;
        		dp[mod]+=x;
        		while(arr[gr]) {
        			gr++;
        		}
        		cout << gr << "\n";
        	}
        }