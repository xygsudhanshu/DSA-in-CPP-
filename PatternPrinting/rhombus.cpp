#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter row number:";
    cin>>n;
    // for(int i=1; i<=n; i++){
            // for(int j=1; j<=2*n-1; j++){
            //     if(i+j>=n+1 && i+j<=2*n) cout<<"*";
            //     else cout<<" ";
            // }
            // cout<<endl;
    //}
    
    //dusra tarika
      for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            cout<<" ";
        }
        for(int k=1;k<=n;k++){
            cout<<"*";
        }
        cout<<endl;
      }
    
}