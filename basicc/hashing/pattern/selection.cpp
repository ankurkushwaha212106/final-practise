#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,3,5,2,8,4,0};
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] < arr[i])
            {
                swap(arr[i] , arr[j]);
            }
        }
    } 
    for(int x : arr)
    {
        cout<< x <<"  ";
    }
    return 0;
}