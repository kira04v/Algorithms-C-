#include <iostream>

using namespace std;

int main()
{
    int i,j,k,l,n;
    cin>>n;
    for(i=1;i<=n;i++)
        {
            for(j=1;j<=(n-i);j++)
                {
                    cout<<"  ";
                }
            for(k=1;k<=n;k++)
                {
                    cout<<"* ";
                }
            cout<<endl;
        }
    return 0;
}
