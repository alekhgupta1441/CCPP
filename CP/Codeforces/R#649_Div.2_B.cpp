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
    		ll n;
    		cin >> n;
    		ll p[n];
    		for(ll i=0;i<n;i++)
    			cin >> p[i];
    		ll cur=0;
    		vector <ll> ans;
    		ans.push_back(p[0]);
    		for(ll i=0;i<n-1;i++)
    		{
    			if(p[i]<p[i+1])
    			{
    				while(p[i]<p[i+1] && i<n-1)
    				{
    					i++;
    				}
    				ans.push_back(p[i]);
    				i--;
    			}
    			else if(p[i]>p[i+1])
    			{
    				while(p[i]>p[i+1] && i<n-1)
    				{
    					i++;
    				}
    				ans.push_back(p[i]);
    				i--;
    			}
    		}
    		cout << ans.size() << "\n";
    		for(ll i=0;i<ans.size();i++)
    			cout << ans[i] << " ";
    		cout << "\n";
    	}
    }