#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int n=5;
    for(int el:arr){
        cout<<el<<" ";
    }
    cout<<"\n";
    int mni;
    for(int i=0;i<n-1;i++){
        int mn=INT16_MAX;
        for(int j=i;j<n;j++){
            if(arr[j]<mn){
                mn=arr[j];
                mni=j;
            }
        }
        swap(arr[i],arr[mni]);
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}