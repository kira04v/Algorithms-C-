#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int add(int a,int b)
{
    int x=0,y=0,z=0,i=0,c=0;
    while(a>0)
        {
            x=x+(pow(2,i) * (a%10));
            i++;
            a=a/10;
        }
    i=0;
    while(b>0)
        {
            y=y+(pow(2,i) * (b%10));
            i++;
            b=b/10;
        }
    z=x+y;
    while(z>0)
        {
            c=10*c+((z%2==0)?0:1);
            z=z/2;
        }
    i=0;
    while(c>0)
        {
            i=10*i+(c%10);
            c/=10;
        }
    return i;
}
int32_t main()
{
    int a,b;
    cin>>a>>b;
    cout<<add(a,b);
    return 0;
}