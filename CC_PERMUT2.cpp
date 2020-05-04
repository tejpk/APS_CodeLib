#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	while(n!=0){
	    int a[1000000],s=0,b[1000000];
	    
	    for(int i=1;i<=n;i++){
	        cin>>a[i];
	        b[i]=a[i];
	    }
	    
	    for(int i=1;i<=n;i++){
	        a[a[i]]=i;
	    }
	    
	    for(int i=1;i<=n;i++){
	        if(a[i]!=b[i]){
	            s=1;
	            cout<<"not ambiguous"<<endl;
	            break;
	        }
	    }
	    
	    if(s==0){
	        cout<<"ambiguous"<<endl;
	    }
	    
	    cin>>n;
	    
	}
	return 0;
}
