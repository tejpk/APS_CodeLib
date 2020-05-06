#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main() 
{

	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long arr[n-1]; // stores salary of workers
	    long long sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i]; // insert elements in array
	        sum+=arr[i];
	    }
	    int mine=*min_element(arr,arr+n);
	    cout<<sum-(n*mine)<<"\n";
	}
	return 0;
}
