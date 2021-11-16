#include <bits/stdc++.h>
using namespace std;
int BubbleSort(int arr[],int n)
{
    int i,j,t;
    for(i=0;i<=n-i;i++)
        {
            for(j=0;j<n;j++)
                {
                    if(arr[j]>arr[j+1])
                        {
                            t=arr[j];
                            arr[j]=arr[j+1];
                            arr[j+1]=t;
                        }
                }
        }
    return arr[n];
}
int32_t main()
{
    int n,i,j,t;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    arr[n]=BubbleSort(arr,n);
    for(i=0;i<n;i++)
        {
            cout<<arr[i];
        }
    return 0;
}