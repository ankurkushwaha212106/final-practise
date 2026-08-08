#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int count = 0;
    int ans = 0;
    while( n > 0 )
    {
      int  last_digit = n % 10;
      count++;
      ans = ans * 10 + last_digit;
      n = n/10;
    }
    cout<<ans<<endl;
    cout<<count<<endl;
    return 0;
}