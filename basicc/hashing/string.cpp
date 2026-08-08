#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int hash[256] = {0};
    //int n = s.size();
    for(int i=0;i<s.size();i++)
    {  
    hash[s[i]]++;
    }
    for(int i=0;i<26;i++)
    {
if(hash[i] > 0)
    }
}