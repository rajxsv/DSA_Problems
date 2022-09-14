#include<bits/stdc++.h>
using namespace std;

int main()
{
    //most efficicent

    int n,sum=0,msum = INT_MIN;
    cin >> n;
    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        sum+=arr[i];
        
        if(sum<0){
            sum = 0;
        }

        if(sum>msum){
            msum=max(sum,msum);
        }
    }    
    cout << msum;

    return 0;
}