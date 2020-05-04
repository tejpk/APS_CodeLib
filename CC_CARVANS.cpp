#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,j,k;
		cin>>n;
		int arr[n];
		for(j=0;j<n;j++)
		  cin>>arr[j];
		  int r=0;
		for(j=n-1;j>=0;j--)
		{
			int p=0;
			for(k=j-1;k>=0;k--)
			{
				if(arr[k]<arr[j])
				{
					p++;
					break;
				}
			}
			if(p==0)
			  r++;
		}
		cout<<r<<endl;
	}
}
