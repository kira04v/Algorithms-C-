#include <iostream>
#include <climits>
using namespace std;
void arithsubarrsum(int n ,int arr[])
{
    int ans=2,pd = arr[1]-arr[0],j=2,curr=2;
    while(j<n)
    {
        if(pd==arr[j]-arr[j-1])
        {
            curr++;
        }
        else
        {
            pd=arr[j]-arr[j-1];
            curr = 2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans;
    return;
}
int main()
{
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
        {
            cin>>arr[i];
        }
    arithsubarrsum(a,arr);
    return 0;
}