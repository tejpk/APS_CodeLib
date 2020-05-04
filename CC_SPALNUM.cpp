#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long int l,r,res=0;
	    cin>>l>>r;
	    for(long int i=l;i<=r;i++)
	    {
	        long int j,sum=0;
	        j=i;
	        while(j)
	        {
	            sum=(sum*10)+j%10;
	            j=j/10;
	        }
	        if(i==sum)
	        res=res+i;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
