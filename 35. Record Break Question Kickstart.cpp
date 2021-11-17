/*
The task is to print no. of record breaking days, as an array is taking for no. of customers on n no. of days
conditions are for record break is that, 
    1. No. of customers on the day of record break should be more than that of all the preceeding days
    2. No. of customers on the day of record break should be more than the next day
*/
#include <iostream>
#include <climits>
using namespace std;
/*    void recbr(int n ,int arr[])
    {
        int ans=0,temp=0;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                if(arr[i]>arr[i+1])
                        {
                            ans++;
                        }
            }
            else if(i>0 && i<n-1)
            {
                for(int j=0;j<i;j++)
                {
                    if(arr[j]<arr[i])
                    {
                        temp++;
                    }
                }
                if(temp==i)
                {
                    if(arr[i]>arr[i+1])
                        {
                            ans++;
                        }
                }
            temp=0;
            }
            else if(i==n-1)
            {
                for(int j=0;j<i;j++)
                {
                    if(arr[j]<arr[i])
                    {
                        temp++;
                    }
                }
                if(temp==i)
                {
                    if(arr[i]>arr[i+1])
                        {
                            ans++;
                        }
                }
            }
        }
        cout<<ans;
        return;
    }
*/
//optimised solution with reduced time complexity
void recbr(int n ,int arr[])
{
    if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    int ans=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mx && arr[i]>arr[i+1])
        {
            ans++;
        }
        mx=max(mx,arr[i]);
    }
    cout<<ans;
    return;
}
int main()
{
    int a;
    cin>>a;
    int arr[a+1];       //see in the function as used
    arr[a]=-1;
    for(int i=0;i<a;i++)
        {
            cin>>arr[i];
        }
    recbr(a,arr);
    return 0;
}
