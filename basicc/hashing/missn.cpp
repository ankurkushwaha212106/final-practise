#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr ={1,2,3,4,6,7};
    int n = arr.size()+1;
    int totalsum = 0;
    
    for(int i=0;i<n;i++)
    {
        totalsum += i;
    }
    int sum =0;
    for(int i=0;i<=n;i++)
    {
        sum += arr[i];
    }
    int missing = totalsum - sum;
    cout<<"missing"<<missing<<endl;
    return 0;
}