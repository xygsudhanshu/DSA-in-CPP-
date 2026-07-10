//Push efficient Approach
#include<iostream>
#include<stack>
using namespace std;
class queue{
    public:
    stack<int> st;
    int top;
    // int bac;
    queue(){

    }
    void push(int val){
         st.push(val);
        //  bac=val;
         if (st.size()==1) top=st.top();
    }
    void pop(){
        if (st.size()==0) {
            cout<<"queue is empty!";
            return;
        }
        stack<int> helper;
        while(st.size()){
            helper.push(st.top());
            st.pop();
        }
        int x=helper.top();
        helper.pop();
        top=helper.top();
        while (helper.size())
        {
            st.push(helper.top());
            helper.pop();
        }        
    }
    int size(){
        return st.size();
    }
    int front(){
        return top;
        // stack<int> helper;
        // while(st.size()){
        //     helper.push(st.top());
        //     st.pop();
        // }
        // int x=helper.top();
        // // top=helper.top();
        // while (helper.size())
        // {
        //     st.push(helper.top());
        //     helper.pop();
        // }
        // return x;
    }
    int back(){
        return st.top();
    }
};
void display(queue &q){
    int n=q.size();
    for (int i = 0; i < n; i++)
    {
        cout<<q.front()<<" ";
        int x=q.front();
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
      queue q;
      
      q.push(10);
      q.push(20);
      q.push(30);
      q.push(40);
      q.push(50);
      display(q);
      q.pop();
      display(q);
      cout<<q.size()<<endl;
      cout<<q.front()<<endl;
}