#include<iostream>
using namespace std;
int main(){
    int n,j,i;
    cout<<"enter no of row:";
    cin>>n;
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <=n-i; j++)
        {
            cout<<" ";
            
        }
        for (int k = 2; k <= i; k++)
        {
            cout<<k;
        }
        
        // for(int l=i+n-1; l>=n+1; l--){
        //        cout<<l-n;
               
        // }
        for(int q=i-1; q>=2; q--){
            cout<<q;
        }
        cout<<endl;
    }
    
}