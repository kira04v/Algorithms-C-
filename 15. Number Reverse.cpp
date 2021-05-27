#include <iostream>
using namespace std;
int main()
{
    int n,i,rev=0;
    cin>>n;
    do  
        {
            rev=(rev*10)+(n%10);
            n=n/10;
        }while(n>0);
    cout<<rev;
    return 0;
}