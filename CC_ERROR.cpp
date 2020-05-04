#include <iostream>
#include <string.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    char s[1000001];
	    cin>>s;
	    bool flag = false;
	    for(int i=0; s[i] != '\0'; ++i)
	    {
	        char test[4];
	        for(int j=i, k=0; k<3; ++k,++j)
	        {
	            test[k] = s[j];
	        }
	        if(strcmp(test,"101")==0 || strcmp(test,"010")==0)
	        {
	            flag = true;
	            break;
	        }
	    }
	    
	    if(flag)
	        cout<<"Good"<<endl;
	    else
	        cout<<"Bad"<<endl;
	}
	return 0;
}
