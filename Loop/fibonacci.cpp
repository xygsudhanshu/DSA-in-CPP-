#include<iostream>
using namespace std;
int main(){
    int n,a=1,b=1,c;
    cin>>n;
    for (int i = 0; i < n-2; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    // if(n==1||n==2) cout<<1;
    // else cout<<c;
    cout<<b;

}