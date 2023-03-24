#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/input.txt", "r", stdin);
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/output.txt", "w", stdout);
#endif
	//Two numbers
	int a, b;

	//User input
	cin >> a >> b;

	//conventional modulo number
	int M = 11;

	//a+b%M
	int c = (a + b) % M;

	//(a+b)%M = (a%M + b%M)%M
	int d = (a % M + b % M) % M;

	cout << c << " " << d << "\n";

	//a-b%M
	c = (a - b) % M;

	//(a-b)%M = (a%M - (b%M)+M)%M;
	d = (a % M - (b % M) + M) % M;
	cout << c << " " << d << "\n";

	//a*b%M
	c = (a * b) % M;

	//(a*b)%M = (a%M * b%M)%M
	d = (a % M * b % M) % M;
	cout << c << " " << d << "\n";

	//For division follow the next few files because it is not the conventional modulus, we have to find something known as the inverse of the number for which you need some prior knowledge which we would learn in the following files.

	//Hope It may be Helpfull for You.

	//Input - 37 , 21

}