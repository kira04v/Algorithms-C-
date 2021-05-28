#include <iostream>
using namespace std;
int Bcoef(int a,int b)
{
    int f=1,g=1,h=1,i;
    for(i=a;i>=1;i--)
        {
            f*=i;
        }
    for(i=b;i>=1;i--)
        {
            g*=i;
        }
    for(i=(a-b);i>=1;i--)
        {
            h*=i;
        }
    i=f/(g*h);
    return i;
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<Bcoef(n,r);
    return 0;
}