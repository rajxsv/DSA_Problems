#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b){
    return a <= b;
}

int main(){
    vector <int> v = {1,2,5,10,20,50,100,200,500,2000};
    int money = 200;

    //without compare function result is number >= 168 that is 200  
    while(money > 0){
    
        auto it = lower_bound(v.begin(),v.end(),money,compare);
        // auto it = lower_bound(v.begin(),v.end(),money);
        int m = (it - v.begin());
        cout<<v[m]<<" ";
        money = money - v[m];
    
    }


    return 0;
}