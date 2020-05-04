#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
	long long int t,i,a[1000000];
	cin>>t;
	for(i=0;i<t;i++ )
	{
	    cin>>a[i];
	}
	sort(a,a+t);
	for(i=0;i<t;i++ )
	{
	    cout<<a[i]<<endl;
	}
	
	return 0;
}
