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