#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the element";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int hash[1000] = {0};
    for(int i=0;i<n;i++)
    {
      hash[arr[i]] += 1;
    }
    int q;
    cout<<"enter the value";
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    }
    return 0;
}