    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main()
    {
    	ll t;
    	cin >> t;
    	while(t--)
    	{
    		ll n;
    		cin >> n;
    		vector <pair<ll,ll>> v;
    		for(ll i=0;i<n;i++)
    		{
    			ll x,y;
    			cin >> x >> y;
    			v.push_back(make_pair(x,y));
    		}
    		sort(v.begin(),v.end());
    		string s="";
    		ll crx=0;
    		ll cry=0;
    		int ck=0;
    		for(ll i=0;i<n;i++)
    		{
    			ll a=v[i].first - crx;
    			ll b=v[i].second - cry;
    			crx=v[i].first;
    			cry=v[i].second;
    			if(a<0 || b<0)
    			{
    				cout << "NO\n";
    				ck=1;
    				break;
    			}
    			while(a)
    			{
    				s+="R";
    				a--;
    			}
    			while(b)
    			{
    				s+="U";
    				b--;
    			}
    		}
    		if(ck)
    			continue;
    		cout << "YES\n";
    		cout << s << "\n";
    	}
    }