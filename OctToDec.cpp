#include<bits/stdc++.h>
using namespace std;

int OcToDec(int n)
{
    int base=1,r,dec=0;

    while(n>0)
    {
        r=n%10;
        dec+=r*base;
        base*=8;
        n/=10;
    }

    return dec;
}

int main()
{
    int n,ans;
    cin>>n;

    ans = OcToDec(n);
    cout<<ans<<endl;
    return 0;

}