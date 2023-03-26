#include<bits/stdc++.h>
using namespace std;

//basic approach O(N)
void divisors(int n)
{
	int count = 0;
	int sum = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			cout << i << " ";
			sum = sum + i;
			count++;
		}
	}

	cout << n << "\n";
	cout << "count -> " << count + 1 << "\n";
	cout << "sum -> " << sum + n << "\n";
}

//optimised approach O(sqrt(N))

void div(int n)
{
	int ct = 0;
	int sum = 0;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			if (i == n / i)
			{
				cout << i << " ";
				ct += 1;
				sum += i;
			}
			else
			{
				cout << i << " " << n / i << " ";
				ct += 2;
				sum += i + (n / i);
			}
		}
	}

	cout << "\n";
	cout << "count -> " << ct << "\n";
	cout << "sum -> " << sum << "\n";

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/input.txt", "r", stdin);
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	divisors(n);
	div(n);

}