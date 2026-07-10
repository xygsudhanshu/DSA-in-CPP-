#include<iostream>
#include<vector>
using namespace std;

int maze(int sr,int sc,int er,int ec,string s){
    if(sr>er||sc>ec){
        s.pop_back();
        return 0;
    }
    if(sr==er&&sc==ec){
        cout<<s<<endl;
     return 1;
    }
    int rightways=maze(sr,sc+1,er,ec,s+"R");
    int downways=maze(sr+1,sc,er,ec,s+"D");
    return rightways+downways;
}
int main(){
    string s="";
    int way=maze(0,0,2,2,s);
    cout<<way<<endl;
}