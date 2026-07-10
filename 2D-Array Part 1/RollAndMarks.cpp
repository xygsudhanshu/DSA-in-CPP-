#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter no of student:\n";
    cin>>row;
    int col=2;
    int a[row][col];
    cout<<"enter roll no and marks of students:\n";
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}