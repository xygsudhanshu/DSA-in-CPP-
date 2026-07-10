#include<iostream>
using namespace std;
int AraisedToB(int a,int b){
    if(a==0 && b==0){
        cout<<"not defined";
        return -100;
    }
    if(b==0) return 1;
    int ans=a*AraisedToB(a,b-1);
    return ans;
}
int main(){
   cout<< AraisedToB(0,0);
}