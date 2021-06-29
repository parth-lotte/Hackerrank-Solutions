#include <iostream>
#include <cstdio>
using namespace std;

int main()
 {
    int a,b;
    cin>>a>>b;
    string s[]= {"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=a;i<=b;i++)
      if(i>=1 and i<=9)
            cout<<s[i-1]<<endl;
            else 
            cout<<(i%2 ?"odd":"even")<<endl;
    

    return 0;
}
