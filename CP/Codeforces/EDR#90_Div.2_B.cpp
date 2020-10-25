    #include<bits/stdc++.h>
    #define ll long long
    #define ld long double
    using namespace std;
     
    int main()
    {
    	ll t;
    	cin >> t;
    	while(t--)
    	{
    		string s;
    		cin >> s;
    		ll one=0;
    		ll zero=0;
    		for(ll i=0;i<s.size();i++)
    		{
    			if(s[i]=='1')
    				one+=1;
    			if(s[i]=='0')
    				zero+=1;
    		}
    		ll mn=min(one,zero);
    		if(mn % 2)
    		{
    			cout << "DA\n";
    		}
    		else
    		{
    			cout << "NET\n";
    		}
    	}
    }

