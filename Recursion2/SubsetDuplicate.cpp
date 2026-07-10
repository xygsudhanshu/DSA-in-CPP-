#include<iostream>
#include<vector>
using namespace std;
void storesubset(string original,string ss,int idx,vector<string>& v,bool flag){
    if(idx==original.length()){
        v.push_back(ss);
        return;
    }
    if(original.size()==1){
       if(flag==true) storesubset(original,ss+original[idx],idx+1,v,true);
        storesubset(original,ss,idx+1,v,true);
        return;
    }
    
    if(original[idx]==original[idx+1]){
        if(flag==true) storesubset(original,ss+original[idx],idx+1,v,true);
        storesubset(original,ss,idx+1,v,false);
    }else{
        if(flag==true) storesubset(original,ss+original[idx],idx+1,v,true);
        storesubset(original,ss,idx+1,v,true);
    }
}
int main(){
    string str="aac";
    vector<string> v;
    // subset(str,"",0);
    storesubset(str,"",0,v,true);
    for(auto st:v){
        cout<<st<<endl;
    }
}