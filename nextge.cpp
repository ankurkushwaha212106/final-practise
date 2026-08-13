#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,4,5,6};
    int n = arr.size();
vector<int>ans(n,-1);
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(arr[j] > arr[i])
        {
            ans[i] = arr[j];
            break;
        }
    }
}
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<< "  ";
    }
    return 0;
}