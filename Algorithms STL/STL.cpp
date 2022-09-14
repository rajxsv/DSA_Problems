#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);

     /* for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
    } */ 
     for(auto &i : v)
    {
        cin >> i;
       
    }  
    /* reverse(v.begin(),v.end());
    v.resize(4); */
   
    //finding an element
 
    int key;
    cin >> key;

    auto it = find(v.begin(),v.end(),key);     //this i returns the address of the element or n = size(if not present)

    if(it!=v.end())
    {
        cout <<"Present at index = "<< (it - v.begin())<<endl; 
    } 

    //sorting the vector
    /* sort(v.begin(),v.end()); */

    for(auto i : v){
        cout << i<<" ";
    }
    cout << endl;
   cout <<"\n"<< sizeof(v)<<" and using the v.size() "<<v.size() << " and capacity " << v.capacity()<<endl;
    v.shrink_to_fit();
    cout << "\nafter shrink\n";
    cout <<"\n"<< sizeof(v)<<" and using the v.size() "<<v.size() << " and capacity " << v.capacity()<<endl; 

    //binary search , lowerbound and upperbound

    // vector <int> v2 {1,2,3,4,5,5,5,5,6,7,8,9};    //try cases both where not present and observe
    vector <int> v2 {1,2,3,4,6,7,8,9};  
    int key2 = 5;


    if(binary_search(v2.begin(),v2.end(),key2)){

        auto itr = lower_bound(v2.begin(),v2.end(),key2);
        cout << "using binary search first time found at "<<itr - v2.begin()<<endl;

        auto itr2 = upper_bound(v2.begin(),v2.end(),key2);
        cout << "using binary search last time found at "<<itr2 - v2.begin()<<endl;

        cout << "total occurrences = "<< itr2 - itr <<endl;
    }





    return 0;
}