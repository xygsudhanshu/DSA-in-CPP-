#include<iostream>
using namespace std;
int fact(int a){
    int f=1;
    for (int i = 2; i <= a; i++)
    {
        f*=i;
    }
    return f;
}
int combination(int n,int r){
    int comb=fact(n)/(fact(r)*fact(n-r));
    return comb;
}
int main(){
    int n;
    cout<<"how long pascal triangle you want:";
    cin>>n;
    for (int i = 0; i <=n; i++)
    {
        for (int k = 0; k <=n-i; k++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j<=i; j++)
        {
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
        
    }
    
}