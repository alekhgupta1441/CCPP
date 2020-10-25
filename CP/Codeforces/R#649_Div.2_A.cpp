    #include <bits/stdc++.h> 
    using namespace std; 
    #define ll long long
    #define ld long double
     
    int main()
    {
    	ll t;
    	cin >> t;
    	while(t--)
    	{
    		ll n,x;
    		cin >> n >> x;
    		ll a[n];
    		for(ll i=0;i<n;i++)
    		{
    			cin >> a[i];
    		}
    		// map <ll, ll> mod;
    		// map <ll, ll> md1;
    		// map <ll, ll> md2;
    		ll cur=0;
    		ll ans=0;
    		ll fs=-1;
    		ll fso=-1;
    		for(ll i=0;i<n;i++)
    		{
    			cur+=a[i];
    			ll k=cur%x;
    			if(k>0)
    				ans=max(ans,i+1);
    			if(k>0 && fs==-1)
    				fs=i;
    			if(k==0)
    				fso=i;
    		}
    		if(fs==-1)
    		{
    			cout << fs << "\n";
    			continue;
    		}
    		else if(fso!=-1)
    		{
    			ll dif=fso-fs;
    			ans=max(dif,ans);
    		}
    		cout << ans << "\n";
    	}
    }