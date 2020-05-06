#include <iostream>
using namespace std;
int isPrime(int n)
{
    if(n==1)
        return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int a,b;
	    cin>>a>>b;
	    int l=a+b;
	    for(int i=l+1;i<1000+l;i++)
	    {
	        //cout<<l<<endl;
	        if(isPrime(i))
	        {
	            cout<<i-l<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
