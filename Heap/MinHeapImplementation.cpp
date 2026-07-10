#include<iostream>
#include<vector>
using namespace std;
class minheap{
    public:
    int arr[50];
    int idx;
    minheap(){
       idx=1;
    }
    int top(){
        return arr[1];
    }
    void push(int x){
        arr[idx]=x;
        int i=idx;
        idx++;
       //swapping of i with parent till i==1 if i is smaller thn parent
       while (i!=1)
       {
          int parent=i/2;
          if(arr[i]<arr[parent]){
            swap(arr[i],arr[parent]);
         }
         else break; 
         i=parent;
       }
       
    }
    void pop(){
        arr[1]=arr[idx-1];
        idx--;
        //rearrangement
        int i=1;
        while (true)
        {
            int left=2*i,right=2*i+1;
            if(left>idx-1)  break;
            if(right>idx-1){
                if(arr[left]<arr[i]){
                    swap(arr[left],arr[i]);
                    i=left;
                }
                break;
            }
            if(arr[left]<arr[right]){
                if(arr[left]<arr[i]){
                    swap(arr[left],arr[i]);
                    i=left;
                }
                else break;
            }
            else{ //arr[left]>arr[right]
                   if(arr[right]<arr[i]){
                    swap(arr[right],arr[i]);
                    i=right;
                   }
                   else break;
            }
        }
        
    }
    int size(){
        return idx-1;
    }
    void display(){
        for (int i = 1; i <= idx-1; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    minheap pq;
    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.push(30);
    pq.push(40);
    pq.push(12);
    pq.push(7);
    pq.push(1);
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
}