#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    vector<int>lower(26,0);
    vector<int>upper(26,0);
    for(int i=0;i<26;i++)
    {
        if(s[i] - 'a')
        {
            lower[s[i]]++;
        }
        else
        {
            
        }
    }
}