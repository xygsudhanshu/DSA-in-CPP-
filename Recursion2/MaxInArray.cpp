#include<iostream>
#include<algorithm>
using namespace std;
int Maxi(int arr[],int n,int idx){
    if(idx==n-1) return arr[n-1];
    return max(Maxi(arr,n,idx+1),arr[idx]);
}
int main(){
    int arr[]={3,5,2,4,7,2,9};
    int mx=Maxi(arr,7,0);
    cout<<mx<<endl;
}