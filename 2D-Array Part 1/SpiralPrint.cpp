#include<iostream>
#include<vector>
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
    vector<int> v;
    int minc=0,maxc=b-1,minr=0,maxr=a-1;
    while (minc<=maxc&&minr<=maxr){
        for (int i = minc; i <= maxc; i++){
            v.push_back(arr[minr][i]);
        }
        minr++;
        for (int i = minr; i <= maxr; i++){
            v.push_back(arr[i][maxc]);
        }
        maxc--;
        for (int i = maxc; i >=minc; i--){
            v.push_back(arr[maxr][i]);
        }
        maxr--;
        for (int i = maxr; i >=minr ; i--){
            v.push_back(arr[i][minc]);
        }
        minc++;
    }
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    
}