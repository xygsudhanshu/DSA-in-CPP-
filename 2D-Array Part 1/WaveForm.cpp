#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter no of row of matrix:";
    cin>>a;
    int b;
    cout<<"enter no of colmn of matrix:";
    cin>>b;
    int arr[a][b];
    cout<<"Enter the elements of matrix:\n";
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
                cin>>arr[i][j];
        }
    }
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            if(i%2!=0) cout<<arr[i][b-1-j]<<" ";
            else cout<<arr[i][j]<<" ";
        }
    }
}