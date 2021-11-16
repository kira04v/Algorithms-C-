#include <bits/stdc++.h>
#include <climits>
using namespace std;
int Maxofsubarray(int a[],int n)
    {
    int i,j,b,temp= INT_MIN;
        for(i=0;i<n;i++)
            {   
                b=0;
                for(j=i;j<n;j++)
                    {   
                        b=b+a[j];
                        temp=max(temp,b);
                    }
            }
        return temp;
    }
int32_t main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }    
    int k=Maxofsubarray(a,n);
    cout<<k;
    return 0;
}