#include<iostream>
using namespace std;
int main(){
    int arr[4][3]={{1,2,3},{4,5,6},{7,5,3},{1,4,2}};
    int mx=INT16_MIN;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            if(arr[i][j]>mx) mx=arr[i][j];
        }
    }
    cout<<mx<<endl;
}