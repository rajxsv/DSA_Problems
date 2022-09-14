#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {

	int n1,n2;

	cin >>n1;
	int one[n1];
		
	for(int i=0;i<n1;i++){
		cin >> one[i];
	}

	cin>>n2;
	int two[n2];
	for(int i=0;i<n2;i++){
		cin >> two[i];
	}

	int carry=0,sum=0,i=n1-1,j=n2-1;
	vector<int> ans;

	while(i>=0||j>=0||carry){
		sum=0;

		if(i>=0)sum+=one[i--];
		
		if(j>=0)sum+=two[j--];

		sum+=carry;
		carry=sum/10;

		ans.push_back(sum%10);
		
	}
	reverse(ans.begin(),ans.end());

	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<",";
	}
	cout<<"END";

	return 0;
}