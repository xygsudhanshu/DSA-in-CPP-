#include<iostream>
#include<vector>
using namespace std;
int count=0;
void mergetwosorted(vector<int> &a,vector<int> &b,vector<int> &v){
    int n1=a.size();
    int n2=b.size();
    int i=0,j=0,k=0;
    while (i<n1 && j<n2)
    {
        if(a[i]>b[j]){
            count+=(n1-i);
            j++;
        }else{
            i++;
        }
    }
    i=0;j=0;
    while (i<n1 && j<n2)
    {
        if(a[i]<b[j]){
            v[k++]=a[i++];
        }else{
            v[k++]=b[j++];
        }
    }
    if(j<n2){
        while(j<n2) v[k++]=b[j++];
    }
    if(i<n1) while(i<n1) v[k++]=a[i++];
}
void countInversion(vector<int> &v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2,n2=n-n1;
    vector<int> a(n1);
    vector<int> b(n2);
    for (int i = 0; i < n1; i++)
    {
        a[i]=v[i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i]=v[i+n1];
    }
    countInversion(a);
    countInversion(b);
    mergetwosorted(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    int arr[]={5,1,3,0,4,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    countInversion(v);
    cout<<count;
}