#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int32_t main()
{
    int n,t;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    for(int i=0;i<n;i++)
        {   
            for(int j=1;j<i;j++)
                {
                    if(a[j]>a[i])
                        {
                            t=a[j];
                            a[j]=a[i];
                            a[i]=t;
                        }
                }
        }
    for(int i=0;i<n;i++)
        {
            cout<<a[i];
        }
    
    return 0;
}