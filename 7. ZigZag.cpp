#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
        {
            if((i-3)%4==0)
                {
                    cout<<"*";
                }
            else
                {
                    cout<<" ";
                }
        }
    cout<<endl;
    for(i=1;i<=n;i++)
        {
            if(i%2==0)
                {
                    cout<<"*";
                }
            else
                {
                    cout<<" ";
                }
        }
    cout<<endl;
    for(i=1;i<=n;i++)
        {
            if((i-1)%4==0)
                {
                    cout<<"*";
                }
            else
                {
                    cout<<" ";
                }
        }
    return 0;
}