#include<iostream>
using namespace std;
int main(){
    int a,b;
    char c;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    cout<<"enter operator:";
    cin>>c;
    switch (c)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;

    default:
        cout<<"invalid operator";
        break;
    }

}