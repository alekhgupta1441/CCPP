#include <bits/stdc++.h> 

using namespace std; 
#define ll long long
#define ld long double
ll power(ll x, ll y, ll p)  
{  
    ll res = 1;     // Initialize result  
  
    x = x % p; // Update x if it is more than or  
                // equal to p 
   
    if (x == 0) return 0; // In case x is divisible by p; 
  
    while (y > 0)  
    {  
        // If y is odd, multiply x with result  
        if (y & 1)  
            res = (res*x) % p;  
  
        // y must be even now  
        y = y>>1; // y = y/2  
        x = (x*x) % p;  
    }  
    return res;  
}  
int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll l,r,m;
		cin >> l >> r >> m;
		ll a,b,c;
		for(ll i=l;i<=r;i++)
		{
			ll x=m%i;
			ll y=m/i;
			if(x<=r-l && y)
			{
				a=i;
				b=r;
				c=r-x;
				break;
			}
			else if(i-x<=r-l)
			{
				a=i;
				c=r;
				b=r-(i-x);
			}
		}
		cout << a << " " << b << " " << c << "\n";
	}
}