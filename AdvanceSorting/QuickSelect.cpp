#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pidx=(si+ei)/2;
    int count=0;
    for (int i = si; i <= ei; i++){
        if(i==pidx) continue;
        if(arr[i]<arr[pidx]) count++;
    }
    int pio=count+si;
    swap(arr[pidx],arr[pio]);
    int i=si,j=ei;
    while(i<pio&&j>pio){
        if(arr[i]<arr[pio]) i++;
        else if(arr[j]>arr[pio]) j--;
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
            
    }
    return pio;
}
int quickselect(int arr[],int si,int ei,int k){
    // if(si>=ei) return 0;
    int pi=partition(arr,si,ei);
    if(pi+1==k){
        return arr[pi];
    }
    else if(pi+1<k){
       return quickselect(arr,pi+1,ei,k);
    }
    else {
       return quickselect(arr,si,pi-1,k);
    }
}
int main(){
    int arr[]={4,-8,2,1,3,6,5,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=4;
    cout<<quickselect(arr,0,n-1,k);
}