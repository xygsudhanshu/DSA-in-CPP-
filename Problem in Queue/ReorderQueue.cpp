#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void arrange(queue<int> &q){
    if(q.size()<=2) return;
    int x=q.front();
    q.pop();
    int y=q.front();
    q.pop();
    arrange(q);
    q.push(x);
    q.push(y);
}
void display(queue<int> &q){
    int n=q.size();
    for (int i = 0; i < n; i++)
    {
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    stack<int> st;
    int n=q.size()/2;
    for (int i = 0; i <n; i++)
    {
        st.push(q.front());
        q.pop();
    }
    for (int i = 0; i <n ; i++)
    {
        q.push(st.top());
        st.pop();
    }
    for (int i = 0; i <n; i++)
    {
        st.push(q.front());
        q.pop();
    }
    for (int i = 0; i < n; i++)
    {
        int x=q.front();
        q.pop();
        int y=st.top();
        st.pop();
        q.push(x);
        q.push(y);
    }
    display(q);
    arrange(q);
    display(q);   
}