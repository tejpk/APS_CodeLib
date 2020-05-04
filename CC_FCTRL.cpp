#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,c=0,i;
        cin>>n;
        while(n>4)
        {
            n=n/5;
            c=c+n;
        }
        
       cout<<c<<endl;
    }
}
