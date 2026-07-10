#include<iostream>
using namespace std;
int noofsetbit(int n){
    int count=0;
    while(n>0){
        n=n&(n-1);
        count++;
    }
    return count;
}
int main(){
    int n=5;
    cout<<"total set bit in this number is:"<<noofsetbit(n)<<endl;
}