#include <bits/stdc++.h>
using namespace std;
int check ( int x,int y,int z )
{   
        if((x*x + y*y) ==(z*z))
            {
                cout<<"pythagorean triplet";
            }
        else if((z*z + y*y) ==(x*x))
            {
                cout<<"pythagorean triplet";
            }
        else if((x*x + z*z) ==(y*y))
            {
                cout<<"pythagorean triplet";
            }
        else
            {
                cout<<"Not a pythagorean triplet";
            }
        return 0;
}
int32_t main()
{
    int a,b,c;
    cin>>a>>b>>c;
    check(a,b,c);
    return 0;
}