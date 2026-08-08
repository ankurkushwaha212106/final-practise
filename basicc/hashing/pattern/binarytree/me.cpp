#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,1,2,1,1,1};
    int n = arr.size();
   // vector<int>v;
    map<int,int>mpp;
    for(int i=0;i<arr.size();i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it : mpp)
    {
        if(it.second > n/2)
        {
            cout<<it.first;
        }
    }
    return 0;
}