#include<bits/stdc++.h>
using namespace std;


int main() {
 int base,exponent;
 cin>>base>>exponent;
 int result = 1;
 
 while(exponent != 0){
 	if(exponent%2 != 0){
 		result *= base; 
 		exponent--;
 	}else{
 		base *= base;
 		exponent /= 2;
 	}
 }
 cout<<result<<endl;
 return 0;
}
