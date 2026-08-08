#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,0,2,0,45,0};
    int n = arr.size();
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j] != 0)
        {
            swap(arr[j],arr[i]);
            i++;
        }
    }
    for(int x : arr)
    {
        cout<< x <<" ";
    }
    return 0;
}