#include<iostream>
#include<stack>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Linkedlist{
    public:
      Node* head;
      Node* tail;
      int size=0;
      Linkedlist(){
        head=tail=NULL;
        size=0;
      }
      void insertattail(int val){
        Node* temp=new Node(val);
        if(size==0){
         head=tail=temp;
         size++;
        }
        else{
            tail->next=temp;
            tail=temp;
            size++;
        }
      }
};
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
    Linkedlist ll;
    while (st.size())
    {
        ll.insertattail(st.top());
        st.pop();
    }
    Node* temp=ll.head;
    while(temp){
        st.push(temp->val);
        temp=temp->next;
    }
    print(st);
}