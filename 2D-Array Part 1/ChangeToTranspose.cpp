#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter order of matrix:";
    cin>>row;
    int col=row;
    int arr[row][col];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i < row; i++){
        for (int j = i+1; j < col; j++){
          swap(arr[i][j],arr[j][i]);   
        }
    }
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}