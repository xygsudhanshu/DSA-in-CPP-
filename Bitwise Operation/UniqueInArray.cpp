#include<iostream>
using namespace std;
int main(){
    int arr[]={2,1,3,2,1,5,5,6,3,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<ans<<endl;
}