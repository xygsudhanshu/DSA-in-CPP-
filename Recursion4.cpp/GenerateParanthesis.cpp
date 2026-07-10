#include<iostream>
#include<vector>
using namespace std;
void paranthesis(string ans,int op,int cl,int n){//op-no of open paranthe.  cl-no of close paran.
    if(op>n) return;
    if(op+cl==2*n){
        cout<<ans<<endl;
        return;
    }
    
    paranthesis(ans+'(',op+1,cl,n);
    if(cl<op) paranthesis(ans+')',op,cl+1,n);
}
int main(){
    int n=3;
    paranthesis("",0,0,n);
}