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
    		ll a=0,b=0,c=0;
    		for(ll i=2;i<sqrt(n);i++)
    		{
    			if(n%i==0)
    			{
    				a=i;
    				b=n/i;
    				break;
    			}
    		}
    		//cout << a << " " <<  b << endl; 
    		for(ll i=2;i<sqrt(b);i++)
    		{
    			if(b%i==0 && i!=a)
    			{
    				c=i;
    				b=b/i;
    				break;
    			}
    		}
    		if(a>=2 && b>=2 && c>=2 && (a!=b) && (a!=c) && (b!=c))
    		{
    			cout << "YES\n";
    			cout << a << " " << b << " " << c << "\n";
    		}
    		else
    			cout << "NO\n";
    	}
    }