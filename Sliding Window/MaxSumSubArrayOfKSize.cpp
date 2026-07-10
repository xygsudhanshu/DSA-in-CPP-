#include<iostream>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int l=i;
    int j=k-1;
    int currsum=0;
    int mx=INT32_MIN;
    int idx=-1;
    while(j<=n-k){
        if(l<=k-1) currsum+=arr[l++];
        else{
            i++;
            j++;
            currsum=currsum+arr[j]-arr[i-1];
            // mx=max(mx,currsum);
            if(currsum>mx){
                idx=i;
                mx=currsum;
            }
        }
    }
    cout<<mx<<i<<endl;
}