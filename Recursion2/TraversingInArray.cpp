#include<iostream>
using namespace std;
void display(int arr[],int n,int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);
}
int main(){
    int arr[]={3,5,2,4,7,2,9};
    display(arr,7,0);
}