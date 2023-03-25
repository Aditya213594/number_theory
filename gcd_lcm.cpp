#include<bits/stdc++.h>
using namespace std;

//eucledian algorithm
int gcd(int a, int b) // recursively
{
	if (b == 0)
	{
		return a;
	}

	return gcd(b, a % b);
}

int bin_exp(int a, int b)
{
	if (b == 0)
	{
		return 1;
	}
	if (b == 1)
	{
		return a;
	}

	int d;
	if (b % 2 != 0)
	{
		d = bin_exp(a, (b - 1) / 2) * a;
	}
	else
	{
		d = bin_exp(a, b / 2);
	}

	return d * d;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/input.txt", "r", stdin);
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/output.txt", "w", stdout);
#endif

	int a, b;
	cin >> a >> b;

	//conventional gcd method
	cout << gcd(a, b) << "\n";

	int lcm = (a * b) / gcd(a, b);

	cout << lcm;
}