#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter no of row of 1.matrix:";
    cin>>a;
    int b;
    cout<<"enter no of colmn of 1.matrix:";
    cin>>b;
    int mat1[a][b];
    int c;
    cout<<"enter no of row of 2.matrix:";
    cin>>c;
    int d;
    cout<<"enter no of colmn of 2.matrix:";
    cin>>d;
    int mat2[c][d];
    if(b!=c){
        cout<<"Sorry these matrices cant be multiply!!\n";
        cout<<"no of column of 1st matrix and no.of row of 2nd matrix must equal!\n";
        return 0;
    }
    else{
        cout<<"Enter the element of 1st matrix:\n";
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
                cin>>mat1[i][j];
            }
        }
        cout<<"Enter the element of 2nd matrix:\n";
        for (int i = 0; i < c; i++){
            for (int j = 0; j < d; j++){
                cin>>mat2[i][j];
            }
        }
        // int res[a][d];
        for (int i = 0; i < a; i++){
            for (int j = 0; j < d; j++){
                // res[i][j]=0;
                int x=0;
                for (int k = 0; k < b; k++){
                    // res[i][j]+=mat1[i][k]*mat2[k][j];
                    x+=mat1[i][k]*mat2[k][j];
                }
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
}