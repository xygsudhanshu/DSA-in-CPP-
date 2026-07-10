#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the last odd number:\n";
    cin>>n;
    if(n%2==0){
        cout<<"please enter an odd number\n";
        return 1;
    }
    for (int i = 1; i <=n; i+=2){
        sum+=i;
    }
    cout<<"sum of the series 1+3+....+"<<n<<"="<<sum<<endl;
    return 0;
}