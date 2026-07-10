#include<iostream>
using namespace std;
int main(){
    int row;
    
    cout<<"enter no of row:";
    cin>>row;
    for (int i = 1; i <= row; i++)
    {
        // char ch='A';
        for (int j = 1; j <=row; j++)
        {
           cout<<(char)(j+64)<<" ";
        //    ch++;
        }
        cout<<endl;
    }
    
}