#include<iostream>
using namespace std;

//Iterative method
bool ispallindrome(string str){
    int i=0;
    int j=str.length()-1;
    while(i<j){
        if(str[i]!=str[j]) return false;
        i++;
        j--;
    }
    return true;
}
//Recursive method
bool isPallindrome(string s,int i,int j){
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    else return isPallindrome(s,i+1,j-1);
}
int main(){
    string str="abcdefgfedcba";
    // cout<<ispallindrome(str);
    cout<<isPallindrome(str,0,str.length()-1);
}