#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>arr = {0,1,3,0,12,0};
   
    // 0 1 3 0 12 0
    vector<int>ans;
    vector<int>ans1;
    for(int i=0;i<arr.size();i++)
    {
     if(arr[i] != 0)
     {
        ans.push_back(arr[i]);
     }
     else
     {
        ans1.push_back(arr[i]);
     }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
    for(int i=0;i<ans1.size();i++)
    {
        cout<<ans1[i];
    }
    return 0;
}