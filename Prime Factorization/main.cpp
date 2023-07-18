#include<bits/stdc++.h>
using namespace std;
void primeFactorization(int n);

int main() { 
 int n;
 cin>>n;
 primeFactorization(n); 
 return 0;
}

void primeFactorization(int n){
  //N = 24 -----> 2*2*2*3 = 2^3+ 3^1
  
  for(int i = 2; i*i <= n; i++){
    if(n%i == 0){
       int count = 0;
       while(n%i == 0){
        count++; 
        n = n/i;
      }
      cout<<i<<"^"<<count<<",";
    }
  }
  
  if(1<n) cout<<n<<"^"<<1<<endl;
  else cout<<endl;
}