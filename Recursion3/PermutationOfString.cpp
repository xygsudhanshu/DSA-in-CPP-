#include<iostream>
using namespace std;
void Permutation(string original,string ans){
    if(original.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.length();i++){
        // char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        Permutation(left+right,ans+original[i]);
    }
}
int main(){
    string str="abc";
    Permutation(str,"");
}