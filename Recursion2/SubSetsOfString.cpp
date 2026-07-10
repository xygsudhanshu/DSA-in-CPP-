#include<iostream>
#include<vector>
using namespace std;
void subset(string str,string ss,int idx){
    if(idx==str.length()){
        cout<<ss<<" ";
        return;
    }
    subset(str,ss+str[idx],idx+1);
    subset(str,ss,idx+1);
}
//storing all these subsets of string
void storesubset(string original,string ss,int idx,vector<string>& v){
    if(idx==original.length()){
        v.push_back(ss);
        return;
    }
    storesubset(original,ss+original[idx],idx+1,v);
    storesubset(original,ss,idx+1,v);
}
int main(){
    string str="abc";
    vector<string> v;
    // subset(str,"",0);
    storesubset(str,"",0,v);
    for(auto st:v){
        cout<<st<<endl;
    }
}