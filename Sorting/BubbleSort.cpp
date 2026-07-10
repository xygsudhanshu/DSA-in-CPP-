#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
    bool flag=true;
    for(int i=0;i<n-1;i++){
         if(arr[i]>arr[i+1]){ 
         flag=false;
         break;
        }
    }
    return flag;
}
int main(){
    int arr[]={5,1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
             swap(arr[j],arr[j+1]);
             flag=false;
            }
            if(flag==true){//swapping didn't happen it means array is sorted
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}