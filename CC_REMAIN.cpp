#include <iostream>
using namespace std;
int main()
{
    long long int t,m,n;
    cin>>t;
    while(t)
    {
        cin>>n>>m;
       if((n%m)%2==0)
       cout<<"EVEN"<<endl;
       else cout<<"ODD"<<endl;
        t--;
    }
return 0;
}
