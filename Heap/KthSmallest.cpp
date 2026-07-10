#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={5,4,10,12,43,3,18,2};
    int k=3;
    priority_queue<int> pq;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top()<<endl;
}