#include<math.h>
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int i,n,count=0;
	cin>>n;
	for(i=0;i<n;i++) {
		vector<int> v;
		int x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;

		int l1= pow(x1-x2,2)+pow(y1-y2,2);
		int l2= pow(x1-x3,2)+pow(y1-y3,2);
		int l3= pow(x3-x2,2)+pow(y3-y2,2);
		v.push_back(l1);
		v.push_back(l2);
		v.push_back(l3);
	
		
		sort(v.begin(),v.end());

	

		if(v[0]+v[1]==v[2]) 
			count+=1;
	}
	cout<<count<<endl;

	return 0;
}
