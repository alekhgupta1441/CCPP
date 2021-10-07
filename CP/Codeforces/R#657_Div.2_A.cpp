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
		ll n;
		cin >> n;
		string s;
		cin >> s;
		string cc="abacaba";
		ll inx=-1;
		ll cnt=0;
		for(ll i=0;i<s.size()-6;i++)
		{
			ll ck=1;
			for(ll j=i;j<i+7;j++)
			{
				if(s[j]==cc[j-i])
				{
					continue;
				}
				else
				{
					ck=0;
					break;
				}
			}
			if(ck==1)
			{
				cnt+=1;
			}
		}
		//cout << cnt << "\n";
		if(cnt>1)
		{
			cout << "No\n";
			continue;
		}
		if(cnt==1)
		{
			cout << "Yes\n";
			for(ll i=0;i<s.size();i++)
		{
			if (s[i]=='?')
			{
				s[i]='z';
			}
		}
		cout << s << "\n";
		continue;
		}
		vector <ll> ind;
		for(ll i=0;i<s.size()-6;i++)
		{
			ll ck=1;
			for(ll j=i;j<i+7;j++)
			{
				if(s[j]==cc[j-i] || s[j]=='?')
				{
					continue;
				}
				else
				{
					ck=0;
					break;
				}
			}
			if(ck==1)
			{
				inx=i;
				ind.push_back(inx);
			}
		}
		if(inx==-1)
		{
			cout << "No\n";
			continue;
		}
		ll chk=0;
		for(ll k=0;k<ind.size();k++)
		{
			inx=ind[k];
			string ss=s;
			for(ll i=inx;i<inx+7;i++)
			{
				if(ss[i]==cc[i-inx])
				continue;
				else
				ss[i]=cc[i-inx];
			}
			for(ll i=0;i<s.size();i++)
			{
				if (ss[i]=='?')
				{
					ss[i]='z';
				}
			}
			cnt=0;
			for(ll i=0;i<ss.size()-6;i++)
		{
			ll ck=1;
			for(ll j=i;j<i+7;j++)
			{
				if(ss[j]==cc[j-i])
				{
					continue;
				}
				else
				{
					ck=0;
					break;
				}
			}
			if(ck==1)
			{
				cnt+=1;
			}
		}
		if(cnt==1)
		{
			cout << "Yes\n";
			cout << ss << "\n";
			chk=1;
			break;
		}
		}
		if(chk==0)
			cout << "No\n"; 
		//cout << ans << "\n";
	}
}