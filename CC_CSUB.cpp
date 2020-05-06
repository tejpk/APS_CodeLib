#include<iostream>
using namespace std;

int main()
{
	long int t,n,i,num;
	char arr[100000];
	cin>>t;
	while(t--)
	{
		num=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]=='1')
				num++;
		}
		cout<<(num*(num-1))/2+num<<"\n";
	}
	return 0;
}
