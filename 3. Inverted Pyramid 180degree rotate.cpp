#include <iostream>

using namespace std;

int main()
{
    int i,j,c=1,k,n;
    cin>>n;
    for(i=n;i>0;i--)
        {
            for(j=(i-1);j>0;j--)
            {
                cout<<"  ";
            }
            for(k=c;k>0;k--)
            {
                cout<<"* ";
            }
            cout<<endl;
            c++;
        }
    return 0;
}