#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter a line:\n";
    getline(cin,str);
    cout<<str<<endl;
    int i=0;
    while(str[i]!='\0'){
        if(i%2==0) str[i]='t';
        i++;
    }
    cout<<str<<endl;
}