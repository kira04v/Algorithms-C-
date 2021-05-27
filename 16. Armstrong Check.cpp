#include <iostream>
using namespace std;
int main()
{
    int n,a=0,i,j;
    cin>>n;
    j=n;
    do  
        {
            i=n%10;
            a=a + (i * i * i);
            n=n/10;
        }while(n>0);
    if(a==j)
        {
            cout<<"Armstrong";
        }
    else
        {
            cout<<"Not Armstrong";
        }
        return 0;
}