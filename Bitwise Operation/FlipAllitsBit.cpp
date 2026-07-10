#include<iostream>
using namespace std;
int main(){
    int n=22;
    int x=n;
    x=x|(x>>1);
    x=x|(x>>2);
    x=x|(x>>4);
    x=x|(x>>8);
    x=x|(x>>16);
    cout<<"After flipping it became:"<<(n^x)<<endl;
}