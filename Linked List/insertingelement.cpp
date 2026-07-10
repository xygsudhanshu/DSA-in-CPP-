#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
}*start;
int insert(int d){
    node* temp;
    temp=(node*)malloc(sizeof(node));
    temp->data=d;
    temp->next=NULL;
    if(start==NULL) start=temp;
    else{
      start->data=temp->data;
      
    }
    return start->data;
}