#include <bits/stdc++.h>
#include <climits>
using namespace std;
int32_t main()
{
    int n,i,m=-1111111;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    for(i=0;i<n;i++)
        {
            m=max(m,arr[i]);
        }
    cout<<m;
    return 0;
}