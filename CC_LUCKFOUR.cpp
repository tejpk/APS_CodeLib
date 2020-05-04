#include <iostream>
using namespace std;

int main() {
    long long int t,n,tot=0;
    cin>>t;
    while(t--)
    {
        tot=0;
        cin>>n;
        while(n)
        {
            if(n%10==4)
            {
                tot+=1;
            }
            n=n/10;
        }
        cout<<tot<<endl;
    }
	return 0;
}
