#include<iostream>
#include<stack>
#include<vector>
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
    print(st);
    vector<int> v;
    while(st.size()){
        v.push_back(st.top());
        st.pop();
    }
    for (int i = 0; i < v.size(); i++)
    {
        st.push(v[i]);
    }
    print(st);
}