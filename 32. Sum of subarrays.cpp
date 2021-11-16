#include <iostream>
#include <climits>
using namespace std;
void subarrsum(int n ,int arr[])
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        temp=0;
        for(int j=i;j<n;j++)
        {
            temp += arr[j];
            cout<<temp<<endl;
        }
    }
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
    subarrsum(a,arr);
    return 0;
}