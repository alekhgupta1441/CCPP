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
		string s;
		cin >> s;
		ll ct1=0;
		ll ct2=0;
		ll ans=0;
		if(s.size() < 9)
		{
			cout << "Case #" << ct << ": 0\n";
			continue;
		}
		for(ll i=0;i<s.size()-4;i++)
		{
			if(s[i]=='K'&& s[i+1]=='I' && s[i+2]=='C' && s[i+3]=='K')
			{
				ct1+=1;
			}
			if(s[i]=='S'&& s[i+1]=='T' && s[i+2]=='A' && s[i+3]=='R' && s[i+4]=='T')
			{
				ans+=ct1;
			}
		}
		cout << "Case #" << ct << ": " << ans << "\n";
	}
}