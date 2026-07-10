#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    // cout<<str.substr(2)<<endl;
    cout<<"Enter a String:\n";
    cin>>str;
    int len=str.length();
    cout<<str.substr(len/2);
}