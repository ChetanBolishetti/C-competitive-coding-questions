#include<iostream>
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
    int s;
    cin>>s;
    int i=0;
    int sum=0;
    int j=0;
    while(i<n)
    {
        j=i;
        while(j<n)
        {
            sum+=a[j];
            if(sum>s)
            {
                sum=0;
                break;
            }
            if(sum==s)
            {
                cout<<i<<" "<<j<<endl;
                return 0;
            }
            j++;
        }
        i++;
    }
    cout<<"-1";
    return 0;
}