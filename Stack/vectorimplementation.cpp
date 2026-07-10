#include<iostream>
#include<vector>
using namespace std;
class stack{
    public:
    vector<int> v;
    stack(){

    }
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        if(v.size()==0) {
            cout<<"stack is empty";
            return;
        }
        v.pop_back();
    }
    int top(){
        return v[v.size()-1];
    }
    int size(){
        return v.size();
    }
    void display(){
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[v.size()-1-i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.display();
    st.pop();
    st.display();
    cout<<st.size()<<endl;
    cout<<st.top();
}