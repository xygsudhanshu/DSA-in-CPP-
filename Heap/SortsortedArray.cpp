#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={10,9,8,7,4,70,60,50};
    int k=4;
    priority_queue<int,vector<int>,greater<int>> pq;
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
          arr[j]=pq.top();
          j++;
          pq.pop();
        }
    }
    while(pq.size()){
        arr[j]=pq.top();
        j++;
        pq.pop();
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    //new vector me vpush back kra skte hain
    
}