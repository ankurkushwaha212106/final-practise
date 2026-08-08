#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the original_number";
    cin>>n;
    //121 ✅ Palindrome
    //1331 ✅ Palindrome
      //12321 ✅ Palindrome
      //123 ❌ Palindrome नहीं है
      int original_number =n;
      int reverse_number =0;
      int count =0;
      while(n > 0)
      {
        int last_digit = n %  10;
     count++;
     reverse_number = reverse_number * 10 + last_digit;
     n = n /10;
      }
      if(original_number == reverse_number)
      {
        cout<<"palindrome"<<endl;
      }
      else
      {
        cout<<"not palindrome"<<endl;
      }
return 0;
}