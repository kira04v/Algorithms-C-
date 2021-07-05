#include <bits/stdc++.h>
using namespace std;
int sum(int a)
    {
        int s=0;
        for(int i=1;i<=a;i++)
            {
                s+=i;
            }
        return s;
    }
int32_t main()
{
    int a;
    cin>>a;
    cout<<"\n"<<sum(a);
    return 0;
}