#include <iostream>

using namespace std;

int main()
{
    int i,j,k,l,n;
    cin>>n;
    for(i=0;i<n;i++)
        {
            for(j=1;j<=(5-i);j++)
                {
                    cout<<j;
                }
            cout<<endl;
        }
    return 0;
}
