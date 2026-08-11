#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,5,6};
    int n = arr.size()+1;
    int totalsum = n*(n+1)/2;
    int sum =0;
    for(int i=0;i<arr.size();i++)
    {
        sum += arr[i];
    }
    int missing = totalsum - sum;
    cout<<"missing"<<missing<<" ";
    return 0;

}