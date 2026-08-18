#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {8,6,4,7,4,9,8,10,12};
    int n = arr.size();
    vector<int>ans(n,-1);
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && st.top() < arr[i])
        {
         ans[st.top() = arr[i]];
        }
        else
        {

        }
    }
}