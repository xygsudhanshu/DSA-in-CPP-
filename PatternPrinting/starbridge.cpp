#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter row no:";
    cin>>n;
    for(int l=1;l<=2*n-1;l++){
        cout<<"*";
    }
    cout<<endl;
    int m=n-1;
    int a=1;
    for (int i = 1; i <=m; i++)
    {
       for(int j=1;j<=m+1-i;j++){
        cout<<"*";
       }
        for(int k=1;k<=a;k++){
            cout<<" ";
        }
        a+=2;
        for(int j=1;j<=m+1-i;j++){
        cout<<"*";
       }
        cout<<endl;
        
    }
    
    
}