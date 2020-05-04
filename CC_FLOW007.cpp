#include <iostream>
using namespace std;

int main() {
	// your code goes 
	int t;
	long long int n,sum=0;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    while(n)
	    {
	        sum=(sum*10)+(n%10);
	        n=n/10;
	    }
	    cout<<sum<<endl;
	    sum=0;
	}
	return 0;
}
