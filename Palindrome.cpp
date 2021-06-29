#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n+1];

    cin>>a;

    bool check = true;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            cout<<"Not A Palindrome";
            check=false;
            break;
        }
    }
    if(check)
    {
        cout<<"Palindrome";
    }
  


    return 0;
}