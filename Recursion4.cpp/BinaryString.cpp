#include<iostream>
#include<string>
using namespace std;
void BinaryString(int n,string ans){
    if(ans.size()==n){
        cout<<ans<<endl;
        return;
    }
    BinaryString(n,ans+'0');
    if(ans[ans.length()-1]!='1')
    BinaryString(n,ans+'1');
}
int main(){
    int n=4;
    BinaryString(n,"");
}