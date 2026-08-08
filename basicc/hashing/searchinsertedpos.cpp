#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,3,4,6,8};
    int n = arr.size();
    int target;
    cout<<"target value";
    cin>>target;
    int start = 0;
    int end = n-1;
    while(start <= end)
    {
     int mid = start + (end - start) / 2;
     if(arr[mid] == target)
     {
        cout<<mid;
        return 0;
     }
     else if(arr[mid] )
    }
}