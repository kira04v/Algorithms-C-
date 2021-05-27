#include <iostream>
using namespace std;
int main()
{
    int n,i,j=1;
    cin>>n;
    for(i=2;i<=(n/2);i++)
        {
            if(n%i==0)
                {
                    cout<<"Not prime";
                    j=0;
                    break;
                }
        }
    if(j==1)
        {
            cout<<"prime";
        }
    return 0;
}