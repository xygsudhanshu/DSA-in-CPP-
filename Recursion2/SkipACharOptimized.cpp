#include<iostream>
#include<string>
using namespace std;
void update(string &s,string str,int idx){
    if(idx==s.length()){
        cout<<str<<endl;
        return;
    } 
    char ch=s[idx];
    if(ch!='a') str+=ch;
    update(s,str,idx+1);
}
int main(){
    string str="raghav garg";
    cout<<str<<endl;
    update(str,"",0);
}