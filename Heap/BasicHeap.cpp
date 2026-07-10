//by default max Heap hi use hota h
//priority queue ko hi Heap kahte hain
#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(107);
    pq.push(120);
    pq.push(8);
    pq.push(12);
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    priority_queue<int,vector<int>,greater<int>> minpq;
    minpq.push(1);
    minpq.push(1);
    minpq.push(-1);
    minpq.push(12);
    minpq.push(16);
    cout<<minpq.top()<<endl;

}