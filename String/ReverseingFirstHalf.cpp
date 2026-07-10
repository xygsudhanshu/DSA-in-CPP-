#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str="sudhansh";
    cout<<str<<endl;
    int len=str.length();
    reverse(str.begin(),str.begin()+(len/2));
    cout<<str<<endl;
}