#include<iostream>
using namespace  std;
int main(){
    int arr[]={1,3,3,4,5,6,7,7,7,8,8,8,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=8;
    int lo=0;
    int hi=n-1;
    while (lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==k && arr[mid-1]!=k){
            cout<<mid<<endl;
            break;
        }
        else if(arr[mid-1]==k) hi=mid-1;
        else if(arr[mid]<k) lo=mid+1;
        else hi=mid-1;
    }
    return 0;
}