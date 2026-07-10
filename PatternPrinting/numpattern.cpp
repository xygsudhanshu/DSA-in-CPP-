#include<iostream>
using namespace std;
int main(){
    int row;
    // int count=1;
    cout<<"enter no of row:";
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        // count=1;
        for (int j = 1; j <= row; j++)
        {
            // cout<<count<<" "; ye v ho skta h no problem
            // count++;
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}