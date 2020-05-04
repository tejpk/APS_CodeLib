#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
    while(t--)
    {
    	int g,j;
		cin>>g;
		for(j=0;j<g;j++)
		{
			int i,n,q;
			cin>>i>>n>>q;	
			if(i==1)
			{
				if(n%2==0)
				{
					cout<<n/2<<endl;
				}
				else
				{
					if(q==1)
					  cout<<n/2<<endl;
					else
					  cout<<n/2+1<<endl;
				}
			}
			else if(i==2)
			{
				if(n%2==0)
				{
					cout<<n/2<<endl;
				}
				else
				{
					if(q==2)
					  cout<<n/2<<endl;
					else
					  cout<<n/2+1<<endl;
				}
			}
		}
	}
}
