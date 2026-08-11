#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "ankur";
    //getline(cin,s);
    set<char>st;
    for(int i=0;i<s.size();i++)
    {
        st.insert(s[i]);
    }
 for(auto x : st)
 {
    cout<< x <<"  ";
 }
return 0;
}