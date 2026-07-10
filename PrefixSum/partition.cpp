#include<iostream>
using namespace std;
int main(){
    int arr[]={6,8,9,4,0,2,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    bool flag=false;
    for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            cout<<"yes partition can be happen after idx:"<<i<<endl;
            flag=true;
            break;
        }
    }
    if(flag==false) cout<<"partition cant be happen\n";
}