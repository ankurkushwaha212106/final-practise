#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,1,2,2,3,3};
    int n = arr.size();
    set<int>st;
    for(int i=0;i<n;i++)
    {
        st.insert(arr[i]);
    }
for(auto x: st)
{
    cout<<x<<" ";
}
return 0;
}