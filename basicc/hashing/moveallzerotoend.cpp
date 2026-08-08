#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,0,1,0,4,0,0,3,9};
    int n = arr.size();
    vector<int>ans;
    vector<int>ans1;
    for(int i=0;i<n;i++)
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
     for(int x : ans1)
        ans.push_back(x);

    // Print
    for(int x : ans)
        cout << x << " ";

    return 0;
}