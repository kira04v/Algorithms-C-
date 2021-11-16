#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n,i,j,t;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
                {
                    if(arr[i]>arr[j])
                        {
                            t=arr[i];
                            arr[i]=arr[j];
                            arr[j]=t;
                        }
                }
        }
    for(i=0;i<n;i++)
        {
            cout<<arr[i];
        }
    return 0;
}