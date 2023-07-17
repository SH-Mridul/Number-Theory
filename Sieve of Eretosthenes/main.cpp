#include<bits/stdc++.h>
using namespace std;
int is_prime[1000001];
void saive();

int main() { 
 saive(); //calculation 
 int t,n;
 cin>>t;
 
 while(t--){
  cin>>n;
  cout<<is_prime[n]<<endl;
  if(is_prime[n]){
    cout<<"yes"<<endl;
  }else{
    cout<<"no"<<endl;
  }
 } 
  
 return 0;
}


void saive(){
  int maxN = 1000000;
  for(int i = 1; i <= maxN; i++) is_prime[i] = 1;
  is_prime[0] = is_prime[1] = 0;

  for(int i = 2; i*i <= maxN; i++){
    if(is_prime[i]){
      for(int j = i*i; j <= maxN; j += i){
        is_prime[j] = 0;
      }
    }
  }
}
