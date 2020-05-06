#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n,m,k,d;
    cin>>n>>m>>k;
    int a[1000000]={0};
    vector<int>v;
    for(int i=0;i<(n+m+k);i++)
    {
      cin>>d;
      a[d]++;
      if(a[d]==2)
      v.push_back(d);
    }
    sort(v.begin(),v.end());
    int l=v.size();
    cout<<l<<endl;
    for(int i=0;i<l;i++)
    cout<<v[i]<<endl;
    // your code goes here
	return 0;
}
