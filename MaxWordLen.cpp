#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();

    char a[n+1];
    cin.getline(a ,n);
    cin.ignore();

    int i=0,maxLen = 0,curLen=0,st=0,maxst=0;
    while(true)
    {
        if(a[i]==' ' || a[i]=='\0')
        {
            if (maxLen<curLen)
            {
                maxLen=curLen;
                maxst=st;
            }   
            st=i+1;
            curLen=0;  
        }
        else
        {
             curLen++;
        }
        if (a[i]=='\0')
        {
            break;
        }
        i++;
    }

    cout<<maxLen<<endl;

    for(int j=0;j<maxLen;j++)
    cout<<a[j+maxst];

    return 0;
}