#include<iostream>
#include<string>
using namespace std;
void update(string s,string str){
    if(s==""){
        cout<<str<<endl;
        return;
    } 
    char ch=s[0];
    if(ch!='a') str+=ch;
    update(s.substr(1),str);
}
int main(){
    string str="raghav garg";
    update(str,"");
    cout<<str<<endl;
}