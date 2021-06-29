#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
     string s[]= {"one","two","three","four","five","six","seven","eight","nine"};
     cout<<((n>=1 and n<=9)?s[n-1]:"Greater than 9");
     return 0;
     
     
}
