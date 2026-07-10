#include<iostream>
#include<string>
using namespace std;
class complexnum{
    public:
    int real;
    int imaginary;
    friend complexnum operator + (complexnum &c1,complexnum &c2);
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
};
complexnum operator + (complexnum &c1,complexnum &c2){
    complexnum sum;
    sum.imaginary=c1.imaginary+c2.imaginary;
    sum.real=c1.real+c2.real;
    return sum;
}
int main(){
    complexnum c1,c2,c3,sum;
    // c1.setreal(10);
    // c1.setimaginary(5);
    // c2.setreal(10);
    // c2.setimaginary(20);
    // cout<<"real:"<<c3.getreal()<<" "<<"imaginary:"<<c3.getimaginary()<<endl;
    c1.imaginary=12;
    c1.real=8;
    c2.imaginary=10;
    c2.real=6;
    // c3=c1+c2;
    // c3.imaginary=2;
    // c3.real=3;
    sum=(c1+c2);

    cout<<"real:"<<sum.real<<" "<<"imaginary:"<<sum.imaginary<<endl;
}