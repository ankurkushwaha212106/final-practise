#include<bits/stdc++.h>
using namespace std;
 int main()
{
    vector<int>arr = {1,2,3,4,5};
    int n = arr.size();
    int d;
    cin>>d;
     d = d % n;
  
    reverse(arr.begin(),arr.begin() + d);
    reverse(arr.begin() + d,arr.end());
    reverse(arr.begin(),arr.end());
   
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<"  ";
   } 
   return 0;
}