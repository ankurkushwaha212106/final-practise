#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,1,2,2,3,3};
    int n = arr.size();
    int i=0;
    for(int j=i+1;j<n;j++)
    {
        if(arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }
}