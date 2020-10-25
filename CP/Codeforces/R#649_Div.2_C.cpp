    #include <bits/stdc++.h> 
    using namespace std; 
    #define ll long long
    #define ld long double
     
    int main()
    {
     
    	  ll n;
    	  cin >> n;
      	  ll a[n+1];
      	  ll ps[1000001]={};
     
      	   ll fk[1000001]={};
      	  for(ll i=1;i<=n;i++)
      	  {
      	  	cin >> a[i];
      	  	ps[a[i]]+=1;
      	  }
     	  ll ck=0;
      		
      
     	 vector<ll> ans;
     	 queue<ll> rem;
     	 for(ll i=0;i<=n;i++)
      	{
      		if(ps[i]==0) 
      			continue;
    		while(ps[i])
       		{
       			if(rem.size())
         	  {
           		ps[i]--;
          		ans.push_back(rem.front());
          		fk[rem.front()]+=1;
          		rem.pop();
          	     continue;
          	 }
          	while(ps[ck] || fk[ck]) 
          		ck++;
          	fk[ck]+=1;
          ans.push_back(ck);
          ck+=1;
          ps[i]-=1;
        }
        rem.push(i);
      }
      for(auto it: ans) cout << it << " ";
      	cout << "\n";
    }