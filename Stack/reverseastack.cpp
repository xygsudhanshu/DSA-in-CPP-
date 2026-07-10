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
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int> temp;
    while(st.size()){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    // using two extra stack
    stack<int> sectemp;
    
    while(temp.size()){
        cout<<temp.top()<<" ";
        sectemp.push(temp.top());
        temp.pop();
    }
    cout<<endl;
    while(sectemp.size()){
        cout<<sectemp.top()<<" ";
        st.push(sectemp.top());
        sectemp.pop();
    }
    cout<<endl;
    while(st.size()){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
}