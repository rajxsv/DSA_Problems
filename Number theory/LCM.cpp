#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b)
{
	if(b==0)
	{
		return a;
	}

	return gcd(b,a%b);


}

int main()
{
	int a,b;
	cin >> a >> b;

	int GCD = gcd(a,b);

	// lcm is nothing but (a*b)/gcd;

	int LCM = (a*b)/GCD;

	cout << LCM;

	return 0;
}