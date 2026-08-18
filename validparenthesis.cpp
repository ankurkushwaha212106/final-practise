#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "(()))))";
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
         if(s[i] == '(')
         {
            st.push(s[i]);
         }
        else
        {
            if(s.emty())
            {
                return 0;
            }
        }

    }

}