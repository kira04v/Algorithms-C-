#include <iostream>
using namespace std;
void fibonacci(int a)
{
    int i,j=0,k=1,t;
    for(i=1;i<=a;i++)
        {   
            if(i==1)
                {
                    cout<<" "<<j;
                }
            else if(i==2)
                {
                    cout<<" "<<k;
                }
            else
                {
                    t=k;
                    k=j+k;
                    j=t;
                    cout<<" "<<k;
                }
            
        }
    return;
}
int main()
{
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}