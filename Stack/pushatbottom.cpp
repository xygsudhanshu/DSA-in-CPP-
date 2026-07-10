#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){
    while (st.size()){
         cout<<st.top()<<" ";
         st.pop();
    }
    cout<<endl;
}
void pushatbottom(stack<int> &st,int val){
    stack<int> temp;
      while (st.size())
      {
         temp.push(st.top());
         st.pop();
      }
      st.push(val);
      while (temp.size())
      {
         st.push(temp.top());
         temp.pop();
      }      
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    pushatbottom(st,70);
    print(st);
}