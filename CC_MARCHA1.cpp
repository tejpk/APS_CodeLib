#include <bits/stdc++.h>
using namespace std;

int getsum(vector<int> arr,int i){
    int sum=0;
    int index=0;
    while(i>0){
        if(i&1){
            sum = sum + arr[index];
        }
        index++;
        i = i>>1;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int num = (1<<n) ;
        int flag=0;
        for(int i=0;i<num;i++){
            int sum;
            sum = getsum(arr,i);
            if(sum==m){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"No"<<endl;
        } else{
            cout<<"Yes"<<endl;
        }
    }
}
