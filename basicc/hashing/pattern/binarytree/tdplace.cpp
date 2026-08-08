#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,4,5};
    int n = arr.size();
    int d;
    cin>>d;
    d = d % n;
    int temp[d];
    for(int i=d;i<n;i++)
    {
        arr[i-d] = arr[i];
    }
}