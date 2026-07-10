#include<iostream>
using namespace std;
void Hanoi(int n,char src,char help,char dest){
    if(n==0) return;
    Hanoi(n-1,src,dest,help);
    cout<<src<<"->"<<dest<<endl;
    Hanoi(n-1,help,src,dest);
}
int main(){
    int n=3;
    Hanoi(n,'A','B','C');
}