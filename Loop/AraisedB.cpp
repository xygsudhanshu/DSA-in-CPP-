#include<iostream>
using namespace std;
int main(){
    int a,b;
    float p=1;
    cin>>a>>b;
    int h=b;
    if(b<0) b=-b;
    for (int i = 0; i < b; i++)
    {
        p=p*a;
    }
    
    if(h<0) p=1/p;
    if(a==0&&b==0) cout<<"not defined";
    else cout<<p;

}