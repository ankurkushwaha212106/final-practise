#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int first = 0;
    int second =1;
    for(int i=1;i<=n;i++)
    {
        cout<<first + second<<endl;
        int  c = first + second;
        first = second;
        second  = c;

    }
    return 0;
   

}