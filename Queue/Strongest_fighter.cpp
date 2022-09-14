#include <iostream>
#include <queue>
#include <climits>

using namespace std;
int main(){

	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	
	int i=0;
	int maxk = INT_MIN;
	// queue<int> q;	
	
	for(;i<k;i++){
		// q.push(arr[i]);
		maxk=max(arr[i],maxk);
	}
	cout<<maxk<<" ";
	maxk = INT_MIN;
	for(;i<n;i++){
		// q.pop();
		// q.push(arr[i]);
		maxk=max(maxk,arr[i]);
		cout<<maxk<<" ";
		maxk = INT_MIN;
	}
	return 0;
}