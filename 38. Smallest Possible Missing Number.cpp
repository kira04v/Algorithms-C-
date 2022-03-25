#include <iostream>
#include <climits>
using namespace std;
void missing_pos(int n ,int arr[])
{
    int i,a=9999,b=0,c=0,d;
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
            {
                a=min(a,arr[i]);
            }
    }
    d=a;
    a++;
    while(b==0)
    {
        i=0;
        c=a;
        for(int i=0;i<n;i++)
        {
            if(a==arr[i])
            {
                a++;
            }
        }
        if(c==a)
        {
            b=-1;
        }
    }
    if(d>1)
    {
        cout<<"1";
    }
    else
    {
        cout<<a;
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    missing_pos(n,arr);
    return 0;
}