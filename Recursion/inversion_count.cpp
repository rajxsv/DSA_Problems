#include <iostream>
using namespace std;


const int N = 6;

void merge_sort(int* arr,int s,int e,int* ptr)
{
	int mid=(s+e)/2;
	int i = s;
	int j = mid+1;

	int k=s;
	int temp[1000];

	while(i<=mid and j<=e)
	{
		if(arr[i]<=arr[j])
		{
			temp[k++] = arr[i++];
		}
		else
		{
			temp[k++] =arr[j++];

			*ptr= *ptr + (mid-i+1);
		}

	}

	while(i<=mid)temp[k++]=arr[i++];
	
	while(j<=e)temp[k++]=arr[j++];

	for (int i = s; i <= e; ++i)
	{
		arr[i]=temp[i];
	}

}

void inversion_count(int* arr,int s,int e,int* ptr)
{
	// base case
	if(s>=e)return;

	// rec case
	int mid=(s+e)/2;

	inversion_count(arr,s,mid,ptr);
	inversion_count(arr,mid+1,e,ptr);

	merge_sort(arr,s,e,ptr);
}	


int main()
{
	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int ans=0;

	inversion_count(arr,0,n-1,&ans);

	cout << ans;
	

	return 0;
}