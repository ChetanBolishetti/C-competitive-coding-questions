#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int a[], int n)
{
    int index,min=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        int temp = a[i];
        a[i]=a[min];
        a[min]=temp;
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

    SelectionSort(a,n);
    printArray(a,n);
}