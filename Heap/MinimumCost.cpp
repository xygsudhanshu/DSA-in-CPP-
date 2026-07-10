#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={2,7,4,1,8};
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int x:arr){// T.C->O(log n!)
        pq.push(x);
    }
    int cost=0;
    while(pq.size()>1){
       int x=pq.top();
       pq.pop();
       int y=pq.top();
       pq.pop();
       cost+=x+y;
       pq.push(x+y);
    }
    cout<<cost<<endl;
}