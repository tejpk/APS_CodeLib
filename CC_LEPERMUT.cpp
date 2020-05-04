#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int c1=0,c2=0;
        int* a=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(a[i]>a[j]) c1++;
        for(int i=0;i<n-1;i++)
            if(a[i]>a[i+1]) c2++;

        if(c1==c2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

