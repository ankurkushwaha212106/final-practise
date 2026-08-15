#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector<string>v = {"ab","bc","cd","cd","bc"};
 stack<string>st;
 for(int i=0;i<v.size();i++)
 {
  if(!st.empty())
  {
    st.push(v[i]);
  }
  else if(st.top() == v[i])
  {
    st.pop();
  }
  else
  {
    st.push(v[i]);
  }

 }
}