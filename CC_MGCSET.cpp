#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t;
    cin>>t;
    while(t--)
{
    int count=0,a;
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
       cin>>a;
       if(a%m==0)
       count++;
   }
   count=pow(2,count)-1;
    cout<<count<<endl;
 }
    return 0;
    
}
