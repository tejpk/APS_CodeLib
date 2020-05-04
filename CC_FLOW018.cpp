#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    long long int fact=1;
	    cin>>n;
	    if(n==0)
	    cout<<"1"<<endl;
	    else if(n==1)
	    cout<<"1"<<endl;
	    else
	    {
	        while(n)
	        {
	            fact=fact*n--;
	        }
	         cout<<fact<<endl;
	    }
	   
	}
	return 0;
}
