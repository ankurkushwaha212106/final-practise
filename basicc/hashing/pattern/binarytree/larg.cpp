#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,4,5};
    int largest = INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout<<largest<<" ";
    return 0;
}
