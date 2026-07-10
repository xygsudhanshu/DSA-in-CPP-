#include<iostream>
using namespace std;
class comp{
    public:
    string word;
    // comp(string s1){ word=s1;}
    bool operator ==(comp& s2){
        if(word==s2.word) return true;
        else return false;
    }
};
int main(){
    comp s1;
    s1.word="radhe";
    comp s2;
    s2.word="radhe";
    cout<<(s1==s2);
}