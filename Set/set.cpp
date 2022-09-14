#include <bits/stdc++.h>
using namespace std;

int main(){

    set<int> v;
    
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.insert(x);
    }

    set<int>::iterator itr;
    // way 1 to cout
    for(auto i:v){
        cout << i << " ";
    }

    cout << endl ;
    // way 2
    for(itr=v.begin();itr!=v.end();itr++){
        cout << *itr<< " ";
    }
    return 0;
}