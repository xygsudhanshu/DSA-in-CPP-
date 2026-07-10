#include<iostream>
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
class queue{
    public:
    Node* head;
    Node* tail;
    int len;
    queue(){
        len=0;
        head=tail=NULL;
    }
    void push(int val){
        Node* temp=new Node(val);
        if(len==0){
            head=tail=temp;
            len++;
        }
        else{
            tail->next=temp;
            tail=tail->next;
            len++;
        }
    }
    void pop(){
        if(len==0){
            cout<<"queue is empty!\n";
            return;
        }
        Node* temp=head;
        head=head->next;
        len--;
        delete(temp);//very very important
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
    queue q;
    q.pop();
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.display();
    q.pop();
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
}