#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {2,3,4,5,6};
    int n = arr.size();
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        st.push(arr[i]);
    }
    st.push(1);
    stack<int>temp;
    int i =0;
    while(!st.empty())
    {
        temp = st.top();
      st.pop();
      i++;
    }

}