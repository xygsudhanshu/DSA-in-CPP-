#include<iostream>
using namespace std;
int main(){
    int arr[]={5,6,4,3,2,56,89,-45};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 1; i < n; i++)
    {
        int j=i;
        while(arr[j]<arr[j-1]&&j>0){
         swap(arr[j],arr[j-1]);
         j--;
        }
    }
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}