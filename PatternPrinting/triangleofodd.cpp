#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter no of row:";
    cin>>row;
    for (int i = 1; i <= row; i++)
    {
        // int count=1;
        // for (int j = 1; j <= i; j++)
        // {
        //    cout<<count<<" ";
        //    count+=2;
        // }
        for (int j = 1; j <=2*i-1; j+=2)
        {
            cout<<j<<" ";
        }
        
        cout<<endl;
    }
    
}