#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a,t,sum=0,rem;
    cin>>t;
    
    while(t--)
    {
    cin>>a;
    sum=0;
    while(a)
    {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    cout<<sum<<endl;
}
    return 0;
}
