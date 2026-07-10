#include<iostream>
using namespace std;
int main(){
    int arr[]={5,1,2,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //cycle sort algorithm
    int i=0;
    while(i<n){
        int rightidx=arr[i]-1;
        if(i==rightidx){
            i++;
        }else{
            swap(arr[i],arr[rightidx]);
        }
    }
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}