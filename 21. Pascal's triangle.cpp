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
    int i,j,k,n;
    cin>>n;
    for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
                {
                    cout<<Bcoef((i-1),(j-1))<<" ";
                }
            cout<<endl;
        }
    return 0;
}