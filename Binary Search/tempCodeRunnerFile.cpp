#include<bits/stdc++.h>
using namespace std;
bool cons(int a , int b)
{
    if((a == (b + 1)) || (b == (a + 1)))
    {
        return true;
    }
    else 
    {
        return false;

    }
}
int sol (int a , int b )
{
    if((a==1 && b==2) || (b==1 && a==2) )
    {
        return 1;
    }
    else if(cons(a,b))
    {
        return 2;
    }
  
  return 0;

}
int main()
{
    unsigned int t,n,a,b;
    cin >> t;
    while(t-- && t <= 1000)
    {
        cin >> n >> a >> b;
        if((n>=3) && (n <= 1000) && a && b && (a <= n) && (b <= n )&& ((a<b)||b<a))
        cout << sol(a,b)<<endl;
    }
    return 0;
}