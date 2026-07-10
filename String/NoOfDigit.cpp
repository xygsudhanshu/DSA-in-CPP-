#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:\n";
    cin>>n;
    string s=to_string(n);
    int len=s.length();
    cout<<"Number Of Digit is:"<<len<<endl;
}