#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=3;
    int arr[a][b]={{1,2,3},{4,5,6},{7,5,3},{1,4,2}};
    int brr[a][b]={{2,3,4},{1,2,5},{0,9,3},{8,4,6}};
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            cout<<arr[i][j]+brr[i][j]<<" ";
        }
        cout<<endl;
    }
}