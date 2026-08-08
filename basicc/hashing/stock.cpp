#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {7,1,5,3,6,4};
    int n = arr.size();
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0;i<n;i++)
    {
      if(arr[i] < min)
      {
       min = arr[i];
      }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    int profit = max - min;
    cout<<"profit"<<profit<<endl;
    return 0;
}