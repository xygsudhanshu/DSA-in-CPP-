#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
    int f;//front
    int b;//back
    int c;//capacity
    vector<int> arr;
    int len;
    Queue(int k){
        f=0;
        b=0;
        len=0;
        vector<int> v(k);
        arr=v;
        c=k;
    }
    void push(int val){
        if(len==c){
              cout<<"queue is full\n";
              return;
        }
        arr[b]=val;
        b++;
        if(b==c) b=0;
        len++;
    }
    void pop(){
        if(len==0){
            cout<<"under flow queue is empty!";
            return;
        }
        f++;
        if(f==c) f=0;
        len--;
    }
    int size(){
        return len;
    }
    int front(){
        if(len==0){
            cout<<"queue is empty!";
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(len==0) return -1;
        if(b==0) return arr[c-1];
        return arr[b-1];
    }
    bool isempty(){
        if(len==0) return true;
        else return false;
    }
    void display(){
        int baar=0;
        for (int i = f; baar < len; i++)
        {
            if(i==c) i=0;
            cout<<arr[i]<<" ";
            baar++;
        }
        
        cout<<endl;
    }
};
int main(){
        Queue q(5);
        q.push(10);
        q.push(20);
        q.push(30);
        q.push(40);
        q.display();
        q.pop();
        q.display();
        cout<<q.front()<<endl;
        cout<<q.back()<<endl;
        cout<<q.size()<<endl;
        q.push(50);
        q.display();
        q.push(60);
        q.display();
        q.push(70);
        q.display();
    }