#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1,2,2,3,3,4};

    int n = arr.size();
    int i = 0;

    for(int j = i + 1; j < n; j++)
    {
        if(arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }

    // Sirf unique elements print karo
    for(int j = 0; j <= i; j++)
    {
        cout << arr[j] << endl;
    }

    return 0;
}