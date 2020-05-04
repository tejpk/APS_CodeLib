#include <iostream>
using namespace std;

int main() {
	int count,n,deno[6]={1,2,5,10,50,100},x;
	cin>>count;
	while(count--)
	{	
		int num=0;
		cin>>n;
		for(int j=5;n!=0;j--)
		{
				x=n/deno[j];
				num+=x;
				n%=deno[j];

	
		}
		cout<<num<<endl;
	}
	    
	return 0;
}
