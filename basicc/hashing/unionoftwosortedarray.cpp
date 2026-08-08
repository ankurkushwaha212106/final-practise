#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,3,2,5,7,8};
    vector<int>arr1 = {1,2,3,4,5,6,7};
    int n = arr.size();
    int n1 = arr1.size();
   set<int>st;
   for(int i=0;i<n;i++)
   {
    st.insert(arr[i]);
   }
   for(int i=0;i<n1;i++)
   {
    st.insert(arr1[i]);
   }
 for(auto x : st)
        cout << x << " ";

    return 0;
}