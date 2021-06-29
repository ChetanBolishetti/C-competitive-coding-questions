#include<bits/stdc++.h>
using namespace std;

int DcToBn(int n)
{
    int base = 1;
    int ans = 0;
    while(base<=n)
    {
        base*=2;

    }
    base/=2;

    while(base>0)
    {
        int last = n / base;
        n-=last*base;
        base/=2;
        ans=ans*10 + last;
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;

    int ans = DcToBn(n);
    cout<<ans<<endl;
    return 0;
}