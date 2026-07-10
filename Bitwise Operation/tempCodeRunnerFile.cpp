#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,1,3,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[0];
    }
    int k=0;
    int temp=ans;
    int reans=0;
    while(true){
        if((temp&1)==1) break;
        temp=temp>>1;
        k++;
    }
    for(int i=0;i<n;i++){
        int num=arr[i];
        if((num>>k&1)==1){
            reans=reans^arr[i];
        }
    }
    cout<<reans<<endl;
    cout<<(ans^reans)<<endl;
}