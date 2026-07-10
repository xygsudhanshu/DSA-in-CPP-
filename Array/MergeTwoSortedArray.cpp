#include<iostream>
#include<vector>
using namespace std;
void merge(int arr1[],int n1,int arr2[],int n2,int res[]){
    int i=0,j=0,k=0;
    while(i<n1&&j<n2){
        if(arr1[i]<arr2[j]){
            res[k]=arr1[i];
            k++;
            i++;
        }
        else{
            res[k]=arr2[j];
            k++;
            j++;
        }
    }
    if(i<n1){
        while(i<n1) res[k++]=arr1[i++];
    }
    if(j<n2) while(j<n2) res[k++]=arr2[j++];
}
int main(){
    int arr1[]={3,5,7,9,12};
    int arr2[]={4,6,8,10,14};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int res[n1+n2];
    for (int i = 0; i < n1; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n2; i++){
        cout<<arr2[i]<<" ";
    } 
    cout<<endl;
    merge(arr1,n1,arr2,n2,res);
    for (int i = 0; i < n1+n2; i++){
        cout<<res[i]<<" ";
    }

}