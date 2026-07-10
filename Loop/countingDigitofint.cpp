#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int a=n;
    for (int i = 0; 0 < n%10; i++)
    {
        count++;
        n=n/10;
    }
   if(a==0) cout<<1;
   else cout<<count;
}