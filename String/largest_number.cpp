#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b)
{
    string ab = a.append(b);

    string ba = b.append(a);
 
    return ab > ba;
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<string> s(n);
        
        for(int i = 0 ; i < n ; i++)
        {
            cin >> s[i];
        }

        sort(s.begin(),s.end(),compare);
        
        for(int i = 0 ; i < n; i++)
        {
            cout << s[i];
        }

        cout << endl;
    }

    return 0;
}