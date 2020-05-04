#include <iostream>
#include<iomanip>
using namespace std;

int main() {
int n;
	float a,x;
	   cin>>n>>a;
	   
	   if((n%5)==0 && (a-0.50)>=n)
	   {
	       x=a-n-0.50;
	       cout<<fixed<<setprecision(2)<<x;
	   }
	   else 
	   {
	       cout<<a;
	   }
	
	return 0;
}
