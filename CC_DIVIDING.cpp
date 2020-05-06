#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	int sum1=0;
	int sum2=0;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	    sum1+=i+1;
	    sum2+=a[i];
	}
		
	if(sum1==sum2)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}
