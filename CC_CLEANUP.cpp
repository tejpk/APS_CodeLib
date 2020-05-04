#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while(t--){
        
        int m,n;
        cin>>n>>m;
        int fjbs[m];
        for(int i=0;i<m;i++)
        cin>>fjbs[i];
        vector<int> jbs (n,0);
        for(int i=0;i<n;i++)
        jbs.at(i)=i+1;
        
        for(int i=0;i<m;i++)
        jbs.erase(find(jbs.begin(),jbs.end(),(fjbs[i])));
        
        for(size_t i=0;i<jbs.size();i+=2)
        cout<<jbs.at(i)<<" ";
        cout<<endl;
        for(size_t i=1;i<jbs.size();i+=2)
        cout<<jbs.at(i)<<" ";
        cout<<endl;
         }
    }
