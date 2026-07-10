#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter a line:\n";
    getline(cin,str);
    cout<<str<<endl;
    int i=0,count=0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        count++;
        i++;
    }
    cout<<"The no. of vowel is:"<<count<<endl;
}