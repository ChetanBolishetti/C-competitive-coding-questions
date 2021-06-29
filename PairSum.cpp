#include<bits/stdc++.h>
#include<limits>
using namespace std;
bool PairSum(int a[],int n,int s)
{
    int l=0;
    sort(a,a+n);
    int h=n;

    while(l<h)
    {
        if(a[l]+a[h]==s)
        {
            cout<<l<<" "<<h<<endl;
            return true;
        }
        else if(a[l]+a[h]>s)
        {
            h--;
        }
        else
        {
            l++;
        }
        
    }

    return false;

}
int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s;
    cin>>s;
    PairSum(a,n,s);
    return 0;
}