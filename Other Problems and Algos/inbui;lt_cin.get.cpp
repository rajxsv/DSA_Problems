#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s[1000];
    cin.getline(s , 1000 , '%');
    cout << s <<endl<<strlen(s);
    return 0;
}