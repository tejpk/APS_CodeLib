#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long 

int main(){
  ios::sync_with_stdio(false); cin.tie(0);
  long long int A,B,C,c,d=0,d1=0; 
  scanf("%lld %lld", &A, &B);
  C = A - B;
  if(C%10!=9) C++; else C--;
  printf("%lld",C);
}
