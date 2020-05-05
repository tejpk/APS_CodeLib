#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,j,k,sum=0,sum_child=0,sum_parent=0;
		cin>>n>>k;
		int arr[n];
		for(j=0;j<n;j++)
		{
			cin>>arr[j];
			sum=sum+arr[j];
	    }
	    sort(arr,arr+n);
	    for(j=0;j<k;j++)
	    {
	    	sum_child=sum_child+arr[j];
		}
		for(j=0;j<k;j++)
		{
			sum_parent=sum_parent+arr[n-1-j];
		}
        int p1=abs(sum_child-(sum-sum_child));
        int p2=abs(sum_parent-(sum-sum_parent));
        if(p1>p2)
          cout<<p1<<endl;
        else
          cout<<p2<<endl;
    }
}
