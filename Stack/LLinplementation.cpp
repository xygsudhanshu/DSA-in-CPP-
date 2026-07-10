#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class stack{ //user defined data structure
public:
    node* head;
    int len;
    stack(){
        head=NULL;
        len=0;
    }
    void push(int val){
        node* temp=new node(val);
        temp->next=head;
        head=temp;
        len++;
    }
    void pop(){
        if (len==0)
        {
            cout<<"stack is empty\n";
            return;
        }
        head=head->next;
        len--;
    }
    int size(){
        return len;
    }
    int top(){
        return head->val;
    }
    void display(){
        node* temp=head;
        while (temp)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
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
    cout<<st.top()<<endl;
    cout<<st.size();
}