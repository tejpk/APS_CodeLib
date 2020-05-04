#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,x,p=0;
        cin>>a;
        int b[a];
        for(int i=0;i<a;i++){
            cin>>b[i];
        }
        cin>>x;
        int s = b[x-1];
        for(int i=0;i<a;i++){
            if(s>=b[i]){
               p++;   
            }
        }
        cout<<p<<"\n";
    }
    return 0;
}
