#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int bsearch(int arr[],int n,int key)
    {
        int s=0,e=n,mid;
        while(s<=e)
            {
                mid = (s+e)/2;
                if(arr[mid]==key)
                    {
                        return mid;
                    }
                else if(arr[mid]<key)
                    {
                        s=mid+1;
                    }
                else if(arr[mid]>key)
                    {
                        e=mid-1;
                    }       
            }
        return -1;
    }
int32_t main()
{
    int n,key;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    cin>>key;
    int k=bsearch(a,n,key);
    cout<<k;
    return 0;
}