#include<iostream>
using namespace std;
int main(){
    int x=16;
    int y=23;
    cout<<__builtin_popcount(x^y)<<"\n";
}