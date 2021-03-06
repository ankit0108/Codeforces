	#include<bits/stdc++.h>
	#define ll long long
	using namespace std;

	vector<ll> ans;

	void dp(ll idx, ll count, ll number)
	{
		// cout << idx << "\n";

		if(idx==18)
		{
			if(count<=3)
			 ans.push_back(number);

			 // cout << "***";

			return;
		}

		dp( idx + 1, count , number*10);


		if(count<3)
		{for(ll i = 1; i<=9; i++)
		  {
			dp(idx + 1, count + 1, (number*10 + i));
		  }
	  }

	}


	int main()
	{
		ios_base::sync_with_stdio(0);
	  cin.tie(0);
		cout.tie(0);

		dp(0,0,0);
		ans.push_back(1000000000000000000);

		ll t;
		cin >> t;

		while(t--)
	  {

			ll a, b;
			cin >> a >> b;


			ll answer = (upper_bound(ans.begin(), ans.end(), b) - lower_bound(ans.begin(), ans.end(), a));

			cout << answer << "\n";

		}

	  return 0;
	}
