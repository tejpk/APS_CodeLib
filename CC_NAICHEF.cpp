#include <stdio.h>
#include<iostream>
using namespace std;
 int main()
{
 long long int t,n,a,b,i,x;
 double count1,count2,prob;
 cin>>t;
 while(t)
 {
     cin>>n>>a>>b;
     for(i=0;i<n;i++)
     {
        cin>>x; 
        if(a==x)
        count1++;
        if(b==x)
        count2++;
        x=0;
     }
     count1=count1/n;
     count2=count2/n;
     prob=count1*count2;
     cout<<prob<<endl;
     count1=0;
     count2=0;
     prob=0;
     t=t-1;
 }

    return 0;
}
