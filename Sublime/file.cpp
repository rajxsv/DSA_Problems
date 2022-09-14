#include<bits/stdc++.h>
using namespace std;

pair <int,int> find(vector<int> &v , int n)
{
	int myxor = v[0];
	for (int i = 1; i < n; ++i)
	{
		/* code */
		myxor ^= v[i];
	}

	
	int index = -1,i = 0;

	//finding where is the first set bit
	while(true)
	{
		myxor = myxor >> i;

		if(myxor&1)
		{
			index = i;
			break;
		
		} 	

		i++;
	}

	//finding which elements have set bit at that pos
	int mask = 1 << index;

	vector <int> set_list(n);
	int j = 0;

	for (int i = 0; i < n; ++i)
	{
		/* code */
		if (v[i] & mask)
		{
			set_list[j] = v[i];
			j++;
			/* code */
		}

	}

	int num1 = 0;
	for (int i = 0; i < j; ++i)
	{
		num1 ^= set_list[i];
	}
	
	int num2 = myxor^num1;

	pair <int,int> res(make_pair(num1,num2));

	return res;
}

int main()
{	
	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	pair <int,int> p ;
	p = find(v,n);
	 
	cout << p.first <<" "<<p.second;

	return 0;
}