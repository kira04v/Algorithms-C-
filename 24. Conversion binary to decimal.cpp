#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int decimal(int a)
{
    int b=0,i=0,c;
    while(a!=0)
        {
            c=a%10;
            b=b+(c*pow(2,i));
            i++;
            a=a/10;
        }
    return b;
}
int32_t main()
{
    int a;
    cin>>a;
    cout<<decimal(a);
    return 0;
}