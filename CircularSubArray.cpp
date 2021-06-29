#include<iostream>
#include<limits>
using namespace std;

int kadene(int a[],int n)
{
    int maxsum=INT32_MIN;
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

    return maxsum;
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

    int wrapsum;
    int nonwrapsum;
    int totalsum=0;
    nonwrapsum=kadene(a,n);
    for(int i=0;i<n;i++)
    {
        totalsum+=a[i];
        a[i]=-a[i];
    }

    wrapsum=totalsum+kadene(a,n);

    int maxi = max(wrapsum,nonwrapsum);

    cout<<maxi<<endl;

    return 0;
}