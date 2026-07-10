#include<iostream>
using namespace std;
int main(){
    int n,j,i;
    cout<<"enter no of row:";
    cin>>n;
    int a=1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <=i; j++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    
}