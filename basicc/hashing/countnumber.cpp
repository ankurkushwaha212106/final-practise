#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,4,1,2,3};
    int n = arr.size();

   map<int,int>mp;

    for(int i=0;i<n;i++)
    {
     mp[arr[i]]++;
    }
    
         for(auto it : mp)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    return 0;
}