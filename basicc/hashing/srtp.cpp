#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "ankur";
    int n = s.size();
  //  cout<<"enter the string ";
   // getline(cin,s);
    int d = 2;
     d = d % n;
    reverse(s.begin(), s.begin() + d);
    reverse(s.begin() + d , s.end());
    reverse(s.begin(), s.end());
    
        cout<< s <<"  ";
    
    return 0;
}