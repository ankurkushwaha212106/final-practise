#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,-4,-5,1,1,1};
    int n = arr.size();
    int maxi = INT_MIN;
    for(int i=0;i<n;i++)
    {
        int sum =0;
        for(int j=i;j<n;j++)
        {
             sum  += arr[j];
             maxi = max(maxi,sum);
        }
    }
      cout << "Maximum Subarray Sum = " << maxi << endl;

    return 0;
}