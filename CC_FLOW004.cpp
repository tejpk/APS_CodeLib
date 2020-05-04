#include <iostream>
using namespace std;

int main() {
int t,f,l;
long long int n;
cin>>t;
while(t--)
{
    cin>>n;
    l=n%10;
    while(n)
    {
        f=n%10;
        n=n/10;
    }
    
    cout<<f+l<<endl;
}
	return 0;
}
