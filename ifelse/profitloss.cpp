#include<iostream>
using namespace std;
int main(){
    cout<<"enter cp of the product: ";
    int cp;
    cin>>cp;
    cout<<"enter sp of the product: ";
    int sp;
    cin>>sp;
    int profit=sp-cp;
    if(profit<0){
        profit=-profit;
        cout<<"getting loss of:"<<profit;
    }
    else if(profit==0){
        cout<<"no profit no loss";
    }
    else{
        cout<<"gettin profit of:"<<profit;
    }
}