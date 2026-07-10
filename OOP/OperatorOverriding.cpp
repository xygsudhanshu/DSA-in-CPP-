#include<iostream>
#include<string>
using namespace std;
class complexnum{
    public:
    int real;
    int imaginary;
    // public:
    // void setreal(int real){
    //     this->real=real;
    // }
    // void setimaginary(int imag){
    //     imaginary=imag;
    // }
    // int getreal(){
    //      return real;
    // }
    // int getimaginary(){
    //      return imaginary;
    // }
    complexnum operator +(complexnum &d){
        complexnum res;
        res.imaginary=d.imaginary+this->imaginary;
        res.real=d.real+this->real;
        return res;
    }
};
int main(){
    complexnum c1,c2,c3,sum;
    // c1.setreal(10);
    // c1.setimaginary(5);
    // c2.setreal(10);
    // c2.setimaginary(20);
    // c3=c1+c2;
    // cout<<"real:"<<c3.getreal()<<" "<<"imaginary:"<<c3.getimaginary()<<endl;
    c1.real=10;
    c1.imaginary=5;
    c2.real=12;
    c2.imaginary=16;
    c3.real=2;
    c3.imaginary=5;
    sum=c1+c2+c3;
    cout<<"real:"<<sum.real<<" "<<"imaginary:"<<sum.imaginary<<endl;
}