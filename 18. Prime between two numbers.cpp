#include <iostream>
using namespace std;
void prime(int a,int b)
{
    int i,j,k;
    for(i=a;i<=b;i++)
        {   
            k=1;
            for(j=2;j<=(i/2);j++)
                {
                    if(i%j==0)
                        {
                            k=0;
                            break;
                        }
                }
            if(k==1)
                {
                    cout<<" "<<i;
                }
        }
    return;
}
int main()
{
    int m,n;
    cin>>m>>n;
    prime(m,n);
    return 0;
}
