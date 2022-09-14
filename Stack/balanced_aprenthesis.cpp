#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
	string s;
	cin >> s;
	int n=s.length();

	stack<int> st;
	// int i=0;
	for(int i=0;i<n;i++){
		// char temp=s[i++];
		switch(s[i]){
			case '(':
				st.push(s[i]);
				break;

			case '[':
				st.push(s[i]);
				break;

			case '{':
				st.push(s[i]);
				break;
			
			case ')':
				if(st.top()=='(')st.pop();
				break;

			case ']':
				if(st.top()=='[')st.pop();
				break;
			case '}':
				if(st.top()=='{')st.pop();
				break;
	cout<<"HMM";
		}
	}
	if(st.empty()){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}