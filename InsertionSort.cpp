#include<iostream>
using namespace std;

void InsertionSort(int a[], int n)
{
    for(int i=1;i<n;i++)
    {
        int cur=a[i];
        int j=i-1;
        while(a[j]>cur && j>=0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = cur;
    }
}
void printArray(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

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
    InsertionSort(a,n);
    printArray(a,n);
    return 0;
}