#include <iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++)
        {
            for(j=1;j<=(n-i);j++)
                {
                    cout<<"  ";
                }
            for(k=1;k<=((2*i)-1);k++)
                {
                    if(k==i)
                        {
                            cout<<"1 ";
                        }
                    else if(k<i)
                        {
                            cout<<(i+1-k)<<" ";
                        }
                    else
                        {
                            cout<<(k+1-i)<<" ";
                        }
                }
            cout<<endl;
        }
    return 0;
}