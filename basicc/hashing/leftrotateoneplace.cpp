#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,4,5,6};
    int n = arr.size();
    int temp = arr[0];
    for(int i=1;i<n-2;i++)
    {
        arr[i-1] = arr[i];
        
    }
    arr[n-1] = temp;
}