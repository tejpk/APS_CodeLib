#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	long long int a,b;
	while(t--)
	{
	    cin>>a>>b;
	    cout<<max(a,b)<<" "<<a+b<<endl;
	}
	return 0;
}
