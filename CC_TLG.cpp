#include <iostream>
using namespace std;

int main() {
   long long int a,b,r,lead=0,pla=0,aa=0,bb=0;
   cin>>r;
   for(long long int i=0;i<r;i++)
   {
       cin>>a>>b;
       aa=aa+a;
       bb=bb+b;
       if(aa>bb && (aa-bb)>lead)
       {
           lead=aa-bb;
           pla=1;
       }
       else if(bb>aa && (bb-aa)>lead)
       {
           lead=bb-aa;
           pla=2;
       }
       
   }
   cout<<pla<<" "<<lead;
	return 0;
}
