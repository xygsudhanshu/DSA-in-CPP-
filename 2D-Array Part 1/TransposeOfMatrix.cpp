#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter no of row of matrix:";
    cin>>row;
    int col;
    cout<<"enter no of colmn of matrix:";
    cin>>col;
    int arr[row][col];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
    }
    int t[col][row];
    for (int i = 0; i < col; i++){
        for (int j = 0; j < row; j++){
            t[i][j]=arr[j][i];
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    // for (int i = 0; i < col; i++){
    //     for (int j = 0; j < row; j++){
    //         cout<<t[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}