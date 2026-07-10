#include<iostream>
using namespace std;
int fact(int a){
    int f=1;
    for (int i = 2; i <= a; i++)
    {
        f*=i;
    }
    return f;
}
int combination(int n,int r){
    int comb=fact(n)/(fact(r)*fact(n-r));
    return comb;
}
int permutation(int n,int r){
    int perm=fact(n)/fact(n-r);
    return perm;
}
int main(){
    int n,r;
    cout<<"enter value of n:";
    cin>>n;
    cout<<"enter value of r:";
    cin>>r;
    cout<<"the combination of "<<n<<"C"<<r<<" is:"<<combination(n,r)<<endl;
    cout<<"the permutation of "<<n<<"P"<<r<<" is:"<<permutation(n,r)<<endl;

}