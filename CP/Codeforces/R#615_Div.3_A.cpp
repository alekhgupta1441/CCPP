

    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main()
    {
    	ll t;
    	cin >> t;
    	while(t--)
    	{
    		ll a[3],n;
    		cin >> a[0] >> a[1] >> a[2] >> n;
    		sort(a,a+3);
    		ll x=a[2]-a[1];
    		ll y=a[2]-a[0];
    		ll z=x+y;
    		if(n>=z && (n-z)%3==0)
    			{
    				cout << "Yes\n";
    				continue;
    			}
    		else
    		{
    			cout << "No\n";
    		}
    	}
    }