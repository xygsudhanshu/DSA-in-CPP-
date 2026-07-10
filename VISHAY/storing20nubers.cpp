#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int idx=0;
    bool ispresent[88]={false};
    int count=0;
    while(idx<10){
        int x;
        cin>>x;
        if(x>=100 || x<=10){
            cout<<"invalid number!!!\n";
            continue;
        }
        if(!ispresent[x-11]){
            ispresent[x-11]=true;
            arr[idx]=x;
            idx++;
        }
        else cout<<"you have entered duplicate!!\n";
    }
    for(int i=0;i<idx;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}