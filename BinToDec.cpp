#include<bits/stdc++.h>
using namespace std;

int BtoD(int n)
{
    int dec=0, r;

    int base=1;

    while(n>0)
    {
        r=n%10;
        dec=dec+r*base;
        base*=2;
        n/=10;
    }

    return dec;

}
int main()
{
    int n;
    cin>>n;
      
    int ans = BtoD(n);
    cout<<ans<<endl;
    return 0;
}