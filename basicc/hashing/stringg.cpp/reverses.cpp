#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n = s.size();
    int start = 0;
    int end = n-1;
    while(start < end)
    {
        swap(s[start],s[end]);
        {
            start++;
            end--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<< s[i] <<"  ";
    }
    return 0;

}