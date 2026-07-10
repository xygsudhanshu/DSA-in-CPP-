#include<iostream>
#include<stack>
using namespace std;
string removeduplicate(string s){
    stack<char> st;
    st.push(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        if(s[i]==st.top()){
            continue;
        }
        else{
            st.push(s[i]);
        }
    }
    string str="";
    int i=0;
    while (st.size())
    {
        str+=st.top();
        st.pop();
    }
    cout<<str<<endl;
    for (int i = 0; i < str.length()/2; i++)
    {
        char ch=str[i];
        str[i]=str[str.length()-1-i];
        str[str.length()-1-i]=ch;
    }
    return str;
}
int main(){
    string s="aaabbcddaabffg";
    cout<<s<<endl;
    s=removeduplicate(s);
    cout<<s<<endl;
}