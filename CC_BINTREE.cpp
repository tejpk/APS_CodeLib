#include <iostream>
using namespace std;

int main() {
	
	int t;
	int i,j;
	cin>>t;
	while(t--)
	{ 
	    int count=0;
	    cin>>i>>j;
	   while(i!=j)
	    {
	        if(i>j)
	        i/=2;
	        
	        else 
	        
	        j/=2;
	       
	          count++;
	    }
	   
	    cout<<count<<endl;
	}
	return 0;
}
