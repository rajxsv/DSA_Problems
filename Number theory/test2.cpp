#include<bits/stdc++.h>
using namespace std;

#define ll long long

void primeprint(ll prime[])
{
		
		//marking all odds as prime
	for(ll i = 3 ; i < 100000 ; i+=2)
	{
		prime[i] = 1;	
	}
	

	for(ll i = 3 ; i <= 100000 ; i+=2)
	{
			for(ll j = i*i ; j <=100000 ; j = j + i)
			{
				prime[j] = 0;
			}
	}
	prime[2] = 1;

	prime[0] = prime[1] = 0; 
}
int main()
{	
	ll n;
	cin >> n;

	ll prime[100000] = {0};

	primeprint(prime);

	for (ll i = 0; i <= n; ++i)
	{
		if(prime[i] == 1)
		{
			cout << i << " ";
		}
		/* code */
	} 
	return 0;
}	