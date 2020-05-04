#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 int isprime( int n)
{
     int i;
    if(n==1)
    return 0;
    for(i=2;i*i<=n;++i)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main() {
	// your code goes here
	 int t,m,n;
	cin>>t;
	while(t--)
	{
	    cin>>m>>n;
	     int i;
	    for(  i=m;i<=n;++i)
	    {
	        if(isprime(i))
	        {
	            cout<<i<<"\n";
	        }
	    }
	}

	return 0;
}
