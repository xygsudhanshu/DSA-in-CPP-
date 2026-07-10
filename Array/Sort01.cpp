#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int> &v){
     int i=0;
     int j=v.size()-1;
    while(i<j){
        if(v[i]==0) i++;
        else if(v[j]==1) j--;
        else{
            swap(v[i],v[j]);
            i++;
            j--;
        } 
    }
     
}
int main(){
    int arr[]={1,1,0,1,0,1,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> v(arr,arr+n);
    sort01(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}