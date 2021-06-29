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

    int maxsum=INT32_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int cursum=0;
            for(int k=i;k<=j;k++)
            {
                cursum+=a[k];
            }

            maxsum=max(maxsum,cursum);
        }
    }
    return 0;
}