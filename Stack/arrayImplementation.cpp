#include<iostream>
using namespace std;
class stack{
    public:
    int arr[5];
    int idx;
    stack(){
       idx=-1;
    }
    void push(int val){
         if(idx==4){
            cout<<"stack is full\n";
            return;
         }
         idx++;
         arr[idx]=val;
    }
    void pop(){
        if (idx==-1)
        {
            cout<<"stack is empty\n";
            return;
        }
     idx--;    
    }
    int size(){
       return idx+1;
    }
    int top(){
        return arr[idx];
    }
    void display(){
        for(int i=0;i<=idx;i++){
            cout<<arr[idx-i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    stack st;
    st.pop();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.display();
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    st.push(800);
    st.push(-4);
    st.display();
    cout<<st.size()<<endl;
}