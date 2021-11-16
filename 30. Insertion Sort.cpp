#include <bits/stdc++.h>
using namespace std;
int InsSort(int arr[],int n)
{
    int i,c,j;
    for(i=1;i<n;i++)
        {
            c=arr[i];
            j=i-1;
            while(arr[j]>c && j>=0)
                {
                    arr[j+1]=arr[j];
                    j--;
                }
            arr[j+1]=c;
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
    arr[n]=InsSort(arr,n);
    for(i=0;i<n;i++)
        {
            cout<<arr[i];
        }
    return 0;
}