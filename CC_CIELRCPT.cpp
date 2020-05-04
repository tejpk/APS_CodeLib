#include <iostream>
#include<bits/stdc++.h>
using namespace std;



int main() {
	int t,flag=0;
	long long n;
	cin>>t;
	while(t--)
	{
	   cin>>n;
        int p=2048;
        int count=0;
        while(n>0)
        {
            if(n>=p)
            {
                n=n-p;
                count++;
            }
            else
            {
                p=p/2;
            }
        }
        cout<<count<<endl;
	}
	return 0;
}
