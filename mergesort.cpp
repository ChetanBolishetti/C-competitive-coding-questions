#include<iostream>
using namespace std;

void merge(int l,int mid, int h, int ar[])
{
    int n=mid-l+1;
    int n1=h-mid;

    int a[n];
    int b[n1];

    for(int i=0;i<n;i++)
    {
        a[i]=ar[l+i];
    }
    for(int i=0;i<n1;i++)
    {
        b[i]=ar[mid+1+i];

    }

    int i=0,j=0,k=l;

    while (i<n && j<n1)
    {
        if(a[i]<b[j])
        {
            ar[k]=a[i];
            i++;
            k++;
        }
        else
        {
            ar[k]=b[j];
            j++;
            k++;
        }
    }

    while(i<n)
    {
        ar[k]=a[i];
        i++; k++;
    }
    while(j<n1)
    {
        ar[k]=a[j];
        j++; k++;
    }
}

void printArray(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
void Mergesort(int l, int h, int a[])
{
    if(l<h)
    {

        int mid = (l+h)/2;
        Mergesort(l,mid,a);
        Mergesort(mid+1,h,a);


        merge(l,mid,h,a);
    }

}
int main()
{
    int n;

    cout<<"Enter the array size :";
    cin>>n;
   
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    Mergesort(0,n-1,a);

    printArray(a,n);
    return 0;
}