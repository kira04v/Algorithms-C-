#include <iostream>
#include <climits>
using namespace std;
void firstrepel(int n ,int arr[])
{
    const int N = 1e6+2;
    int idx[N];
    for(int i=0; i<N ; i++)
    {
        idx[i]=-1;
    }
    int minidx = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]] != -1)
        {
            minidx = min(minidx,idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }
    if(minidx == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<minidx+1<<endl;
    }
    return;
}
int main()
{
    int a;
    cin>>a;
    int arr[a];
    arr[a]=-1;
    for(int i=0;i<a;i++)
        {
            cin>>arr[i];
        }
    firstrepel(a,arr);
    return 0;
}