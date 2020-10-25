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
    		ll a,b,c;
    		cin >> a >> b >> c;
    		if(a<c)
    		{
    			cout << "1 ";
    		}
    		else
    		{
    			cout << "-1 ";
    		}
    		ld cs=(ld)c/(ld)b;
    		ld css=(ld)a;
    		if(cs < a)
    		{
    			cout << b << "\n";
    		}
    		else
    			cout << "-1\n";
    	}
    }