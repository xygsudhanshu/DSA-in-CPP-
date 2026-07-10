#include<iostream>
#include<stack>
using namespace std;
int prior(char ch){
    if(ch=='+'||ch=='-') return 1;
    else return 2;
}
int solve(int v1,int v2,char ch){
    if(ch=='+') return v1+v2;
    else if(ch=='-') return v1-v2;
    else if(ch=='*') return v1*v2;
    else return v1/v2;
}
int main(){
    string s="9-9*4/8-3+1*9-1+6/8*1";
    stack<int> val;
    stack<char> op;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>47&&s[i]<58)//s[i]->'0'to'9' 
            val.push(s[i]-48);
        else{//s[i] is '+','-','*','/'
            if(op.size()==0||prior(s[i])>prior(op.top())) op.push(s[i]);
            else{//prior(s[i])<=prior(op.top())
                while(op.size()>0&&prior(s[i])<=prior(op.top())){
                 char ch=op.top();
                 op.pop();
                 int val2=val.top();
                 val.pop();
                 int val1=val.top();
                 val.pop();
                 int ans=solve(val1,val2,ch);
                 val.push(ans);
                }
                op.push(s[i]);
            }
        }
       
    }
    while(op.size()>0){
               char ch=op.top();
               op.pop();
               int val2=val.top();
               val.pop();
               int val1=val.top();
               val.pop();
               int ans=solve(val1,val2,ch);
               val.push(ans);
    }
    cout<<val.top()<<endl;
    cout<<9-9*4/8-3+1*9-1+6/8*1;
}