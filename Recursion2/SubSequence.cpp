#include<iostream>
#include<vector>
using namespace std;
void displaysubset(int arr[],int size,int idx,vector<vector<int>> &v,vector<int> ans){
    if(idx==size){
        if(ans.size()==3){
            v.push_back(ans);
        }
        return;
    }
    ans.push_back(arr[idx]);
    displaysubset(arr,size,idx+1,v,ans);
    ans.pop_back();
    displaysubset(arr,size,idx+1,v,ans);
}
int main(){
    int arr[]={1,2,3,4,5};
    vector<vector<int>> v;
    vector<int> ans;
    int n=sizeof(arr)/sizeof(arr[0]);
    displaysubset(arr,n,0,v,ans);
    for (int i = 0; i < v.size(); i++)
    {
        for(auto x:v[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
}