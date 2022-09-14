#include <bits/stdc++.h>
using namespace std;

void my_sort(vector <int> &v){
    int n = v.size();
    for(int i=0;i<n;i++){
        int index_now = i;
        for(int j=i;j<n;j++){
            if(v[j]<=v[index_now]){
                index_now=j;
            }
        }
        swap(v[index_now],v[i]);
    }
}

int main(){
    int n;
    cin >> n;
    
    vector<int> v(n);
    
    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    my_sort(v);
    
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }

    return 0;
}