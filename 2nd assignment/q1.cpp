#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"ENTER A number\n";
    cin>>x;
    cout<<"ENTER second number\n";
    cin>>y>>z;
    int m=(x*y)%z;
    cout<<"output is:"<<m;

}