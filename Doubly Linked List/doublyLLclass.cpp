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
class DLL{
    public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head=tail=NULL;
        size=0;
    }
    void insertathead(int data){
        Node* temp=new Node(data);
        if(size==0){
             head=tail=temp;
             size++;
        }
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
            size++;
        }
    }
    void insertattail(int data){
        Node* temp=new Node(data);
        if(size==0){
             head=tail=temp;
             size++;
        }
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
            size++;
        }
    }
    void insertatidx(int val,int idx){
        if(idx<0||idx>size) cout<<"inval index\n";
        else if(idx==0) insertathead(val);
        else if(idx==size) insertattail(val);
        else{
            Node* newval=new Node(val);
            Node* temp=head;
            for (int i = 0; i < idx-1; i++)
            {
                temp=temp->next;
            }
            newval->next=temp->next;
            temp->next=newval;
            newval->prev=temp;
            newval->next->prev=newval;
            size++;
        }
    }
    void display(){
        Node* temp=head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void displayrev(){
        Node* temp=tail;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->prev;
        }
        cout<<endl;
    }
};
int main(){
   DLL ll;
   ll.insertattail(10);
   ll.insertattail(20);
   ll.insertattail(30);
   ll.insertattail(40);
   ll.insertattail(50);
   ll.display();
   ll.insertathead(60);
   ll.insertathead(70);
   ll.insertathead(800);
   ll.display();
   ll.displayrev();
   ll.insertatidx(58,0);
   ll.display();
   ll.insertatidx(189,3);
   ll.display();
}