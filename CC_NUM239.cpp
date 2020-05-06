#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    long long int l,r,t;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        int count=0,i;
        for(i=l;i<=r;i++)
        {
            int x=i%10;
            if(x==2||x==3||x==9)
            count++;
        }
        cout<<count<<"\n";
    }
 

    return 0;
}
