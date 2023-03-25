#include<bits/stdc++.h>
using namespace std;
#define ll long long int

//iterative

int bin_exp_itr(int a, int b)
{
	int ans = 1;
	while (b > 0)
	{
		if (b & 1)
		{
			ans = ans * a;
		}

		b = b >> 1;
		a = a * a;
	}

	return ans;
}

// binary multiplication for large values of a,M ~ 10^18

ll bin_multi(ll a, ll b , ll m)
{
	ll ans = 0;

	while (b > 0)
	{
		if (b & 1)
		{
			ans = (ans + a) % m;
		}
		a = (a + a) % m;
		b = b >> 1;
	}

	return ans % m;

}


int main()
{
#ifndef ONLINE_JUDGE
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/input.txt", "r", stdin);
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/output.txt", "w", stdout);
#endif

	ll a, b;
	cin >> a >> b;

	ll M = 1e15 + 7;

	ll ans = bin_multi(a, b, M);

	cout << ans;
}