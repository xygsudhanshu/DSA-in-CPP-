#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"how long pascal triangle you want:";
    cin>>n;
    for (int i = 0; i <=n; i++)
    {
        int curr=1;
        for (int k = 0; k <=n-i; k++)
        {
            cout<<" ";
        }
        for (int j = 0; j<=i; j++)
        {
            cout<<curr<<" ";
            curr=curr*(i-j)/(j+1);
        }
        cout<<endl;
        
    }
    
}