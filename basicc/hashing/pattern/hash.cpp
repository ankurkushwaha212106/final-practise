#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,1,2,3,4,3,2,7};
    int n = arr.size();
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int q;
    cin>>q;
    while(q--);
    {
        int number;
        cin>>number;
    }
    int hash[1000] = {0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]] += 1;
    }
    cout<<hash[number]<<endl;
    return 0;
}