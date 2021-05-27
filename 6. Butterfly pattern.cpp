#include <iostream>

using namespace std;

int main()
{
    int i,j,k,l,n;
    cin>>n;
    for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
                {
                    cout<<"* ";
                }
            for(k=(n-i);k>0;k--)
                {
                    cout<<"  ";
                }
            for(k=(n-i);k>0;k--)
                {
                    cout<<"  ";
                }
            for(j=1;j<=i;j++)
                {
                    cout<<"* ";
                }
            cout<<endl;
        }
    for(i=n;i>0;i--)
        {
            for(j=1;j<=i;j++)
                {
                    cout<<"* ";
                }
            for(k=(n-i);k>0;k--)
                {
                    cout<<"  ";
                }
            for(k=(n-i);k>0;k--)
                {
                    cout<<"  ";
                }
            for(j=1;j<=i;j++)
                {
                    cout<<"* ";
                }
            cout<<endl;
        }
    return 0;
}
