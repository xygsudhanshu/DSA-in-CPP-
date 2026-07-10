#include<iostream>
using namespace std;
int gcd(int a,int b){
    // if(b>a){
    //     swap(a,b); nott necessory
    // }
    if(a%b==0) return b;
    return gcd(b,a%b);
}
int main(){
    int a=8,b=32;
    cout<<gcd(a,b);
}