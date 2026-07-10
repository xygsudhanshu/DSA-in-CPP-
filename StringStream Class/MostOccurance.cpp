#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str="raghav is a maths teacher he is a dsa mentor to";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while (ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int mx=0;
    int count=1;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]==v[i+1]) count++;
        else count=1;
        if(count>=mx){
            mx=count;
            temp=v[i];
            cout<<temp<<" "<<mx<<endl;
        }
    }
}