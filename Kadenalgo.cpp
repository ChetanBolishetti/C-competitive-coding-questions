#include<iostream>
#include<limits>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int maxsum = INT32_MIN;
    int cursum=0;
    for(int i=0;i<n;i++)
    {
        cursum+=a[i];
        if(cursum<0)
        {
            cursum=0;
        }
        maxsum=max(maxsum,cursum);
    }

    cout<<maxsum<<endl;
}