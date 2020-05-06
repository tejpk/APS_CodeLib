/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
  int t,n,x,s,a,b,temp;
  cin>>t;
  while(t--)
  {
      cin>>n>>x>>s;
      for(int i=0;i<s;i++)
      {
          cin>>a>>b;
          if(a==x)
          {
              a=b;
              x=b;
          }
          else if(b==x)
          {
              b=a;
              x=a;
          }
          
         
      }
      cout<<x<<endl;
  }

    return 0;
}
