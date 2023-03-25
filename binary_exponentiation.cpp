#include<bits/stdc++.h>
using namespace std;

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

	int d = bin_exp(a, b / 2);
	if (b % 2 != 0)
	{
		return d * d * a;

	}
	else
	{
		return d * d;
	}

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/input.txt", "r", stdin);
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/output.txt", "w", stdout);
#endif

	int a, b;
	cin >> a >> b;

	//c++ stl
	cout << pow(a, b) << "\n";

	//binary exponentiation
	cout << bin_exp(a, b) << "\n";
}