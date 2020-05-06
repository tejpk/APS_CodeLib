#include <bits/stdc++.h> 
#define ll long long int
#define gcd(a,b) __gcd(a,b)

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll t,n,min,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    min=n;
	    
            for(i=1;i<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                    int div=n/i;
                    div=abs(div-i);
                    if(div<min)
                    min=div;
                }
            
             
        }
       cout<<min<<endl;
	}
	
	
		
	return 0;
}




