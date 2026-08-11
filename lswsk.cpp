#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,4,5};
    int n = arr.size();
    int k = 6;
    int maxi =0;
    for(int i=0;i<n;i++)
    {
        int sum =0;
     for(int j=i;j<n;j++)
     {
        sum += arr[j];
        if(sum == k)
        {
            maxi = max(maxi,j-i+1);
        }
     }
    }
    cout<<maxi<<" ";
    return 0;
}