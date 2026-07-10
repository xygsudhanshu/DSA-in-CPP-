#include<iostream>
using namespace std;
const float pi=3.14;
const int sum(int a,int b){
    return a+b;
}
int main(){
       int r=7;
       float area=pi*r*r;
       int suma=sum(10,6);
       cout<<"area:"<<area<<endl;
       cout<<"sum:"<<suma<<endl;
}