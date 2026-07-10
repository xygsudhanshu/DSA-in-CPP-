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
        for (int k = 1; k <= i; k++)
        {
            cout<<k;
        }
        
        cout<<endl;
    }
    
}