#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
     Node(int val){
      this->val=val;
      this->next=NULL;
      this->prev=NULL;
    }
};
class Deque{
    public:
    Node* head;
    Node* tail;
    int len;
    Deque(){
        len=0;
        head=tail=NULL;
    }
    void pushBack(int val){
        Node* temp=new Node(val);
        if(len==0){
            head=tail=temp;
            len++;
        }
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=tail->next;
            len++;
        }
    }
    void pushFront(int val){
        Node* temp=new Node(val);
        if(len==0){
            head=tail=temp;
            len++;
        }
        else{
            temp->next=head;
            head->prev=temp;
            head=head->prev;
            len++;
        }
    }
    void popBack(){
        if(len==0){
            cout<<"queue is empty!\n";
            return;
        }
        Node* temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        delete(temp);
        len--;
    }
    void popFront(){
        if(len==0){
            cout<<"queue is empty!\n";
            return;
        }
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        delete(temp);
        len--;
    }
    int front(){
        return head->val;
    }
    int back(){
        return tail->val;
    }
    int size(){
        return len;
    }
    void display(){
        Node* temp=head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.pushBack(50);
    dq.pushBack(60);
    dq.display();
    dq.pushFront(100);
    dq.display();
    dq.popBack();
    dq.popFront();
    dq.display();
    cout<<dq.size()<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
}