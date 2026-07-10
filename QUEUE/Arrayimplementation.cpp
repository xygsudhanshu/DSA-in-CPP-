#include<iostream>
using namespace std;
class Queue{
    public:
    int f;
    int b;
    int arr[5];
    Queue(){
        f=0;b=0;
    }
    void push(int val){
        if(b==5){
            cout<<"overflow!";
            return;
        }
        arr[b]=val;
        b++;
    }
    void pop(){
        if(b==0){
            cout<<"under flow queue is emptyt!";
            return;
        }
        f++;
    }
    int size(){
        return b-f;
    }
    int front(){
        if(b-f==0){
            cout<<"queue is empty!";
            return -1;
        }
        return arr[f];
    }
    int back(){
        return arr[b-1];
    }
    bool isempty(){
        if(b-f==0) return true;
        else return false;
    }
    void display(){
        for (int i = f; i < b; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
        Queue q;
        q.push(10);
        q.push(20);
        q.push(30);
        q.push(40);
        q.display();
        q.pop();
        q.display();
        cout<<q.front()<<endl;
        cout<<q.back();
}