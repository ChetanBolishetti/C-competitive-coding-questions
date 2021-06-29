#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int h, int key)
{
    int l=0;

    while(l<=key)
    {
        int mid = (l+h)/2;

        if(key==a[mid])
        {
            return mid;
        }
        if(a[mid]<key)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
        
    }

    return -1;
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

    int key;
    cin>>key;

    int ans  = BinarySearch(a,n,key);

    cout<<ans;
}