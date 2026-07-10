#include<iostream>
#include<cmath>
using namespace std;
void factors(int n){  // TC=O(n)
    for(int i=1;i<=n;i++){
        if(n%i==0) cout<<i<<" ";
    }
}
//optimized
void factorsof(int n){   // TC=O(sqrt(n))
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0) cout<<i<<" ";
    }
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0) cout<<n/i<<" ";
    }
}
int main(){
    factorsof(60);
}