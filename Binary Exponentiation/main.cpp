#include<bits/stdc++.h>
using namespace std;


int main() {
 int base,exponent;
 cin>>base>>exponent;
 int result = 1;
 int mod = 1e9;
 
 while(exponent != 0){
 	if(exponent%2 != 0){
 		result = (result*base)%mod; 
 		exponent--;
 	}else{
 		base = (base*base)%mod;
 		exponent /= 2;
 	}
 }
 
 
 //---------------its for smaller number-------
 //-------------upper one is safe,when comes borrow--------
 //  while(exponent != 0){
 //  if(exponent%2 != 0){
 //    result *= base; 
 //    exponent--;
 //  }else{
 //    base *= base;
 //    exponent /= 2;
 //  }
 // }
 
 cout<<result<<endl;
 return 0;
}
