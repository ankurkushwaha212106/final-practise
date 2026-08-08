#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {3,5,8,15,17};
    int n = arr.size();
    int target;
    cout<<"enter the target value";
    cin>>target;
    int start = 0;
    int end = n-1;
    while(start <= end)
    {
    int mid = start + (end - start) / 2;
     if(arr[mid] > target)
     {
        cout<<mid;
        return 0;
     }
     else if(arr[mid] > target)
     {
    end = mid -1;
     }
     else
     {
        start = mid + 1;
     }
    }
    return 0;
}