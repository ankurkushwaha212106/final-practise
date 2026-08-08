#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cout<<"enter the string";
    getline(cin,st);
    int hash[256] = {0};
    for(int i=0;i<st.size();i++)
    {
        hash[st[i]] += 1;
    }
    int q;
    cin>>q;
    while(q--)
    {
      char ch;
      cin>>ch;
        cout<<hash[ch]<<endl;
    }
    return 0;
}