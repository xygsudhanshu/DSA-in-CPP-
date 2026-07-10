//Queue is just same as stack,bus kuch kuch difference hai
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.front()<<endl;//10
    q.pop();
    cout<<q.front()<<endl;//20
    cout<<q.back()<<endl;//50
    cout<<q.size()<<endl;//4
    cout<<q.empty();//0
}