#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n);

int main() {
 int n;
 cin>>n;
 
 while(n--){
  int input;
  cin>>input;
  if(isPrime(input)) 
    cout<<"yes"<<endl;
  else 
    cout<<"no"<<endl;
 }
 
 return 0;
}

bool isPrime(int n){
  if(n<2) return false;
  if(n <= 3) return true;
  if(n%2 == 0) return false;
  
  for(int i = 2; i*i<=n; i++){
      if(n%i == 0) return false;
  }
  
  return true;
}
