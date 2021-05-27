#include <iostream>
using namespace std;
int factorial(int a)
{
    int f=1,i;
    for(i=a;i>=1;i--)
        {
            f*=i;
        }
    return f;
}
int main()
{
    int n,a=0,i,j;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
