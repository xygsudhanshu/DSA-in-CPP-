#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivot=(si+ei)/2,count=0;
    for (int i = si; i < ei+1; i++)
    {
        if(i==pivot) continue;
        if(arr[i]<arr[pivot]){
            count++;
        }
    }
    int pidx=si+count;
    swap(arr[pivot],arr[pidx]);
    int i=si,j=ei;
    while(i<pidx&&j>pidx){
        if(arr[i]<arr[pidx]) i++;
        else if(arr[j]>arr[pidx]) j--;
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pidx;
}
int npartition(int arr[],int lo,int hi){
    int pivot=arr[hi];
    int k=lo,j=hi-1;
    while(k<=j){
        while(arr[k]<pivot && k<=j) k++;
        while(arr[j]>pivot && j>=k) j--;
        if(j<k) break;
        else swap(arr[k++],arr[j--]);

    }
    swap(arr[hi],arr[k]);
    return k;
}
void quickSort(int arr[],int si,int ei){
    if(si>=ei) return;
    // int pi=partition(arr,si,ei);
    int pi=npartition(arr,si,ei);
    quickSort(arr,si,pi-1);
    quickSort(arr,pi+1,ei);
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4,12,78,-52,98,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}