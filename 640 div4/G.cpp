#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;

	while(t--)
  {

    ll n;
    cin >> n;

    if(n < 4)
      cout << "-1\n";

    else
    {

    ll start = n;

    if(n%2==0) start-=1;

    for(ll i = start; i>=1; i-=2)
    {
      cout <<  i << " ";
    }

    cout << "4 2 ";

    ll end = n;

    if(n%2!=0) end-=1;

    for(ll i = 6 ; i<=end; i+=2)
      cout << i << " ";

       cout << "\n";
  }


	}

  return 0;

}
