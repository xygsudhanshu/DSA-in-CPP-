#include<iostream>
#include<unordered_map>
using namespace std;
 typedef pair<string,int> sho;
int main(){
     unordered_map<string,int> mp;
    //  mp[5]=4;
    //  mp[6]=2;
    //  mp[4]=3;
    //  mp[8]=1;
    sho p1;
    p1.first="Sudhanshu";
    p1.second=8;
    sho p2;
    p2.first="Rohit";
    p2.second=8;
    sho p3;
    p3.first="Radhe";
    p3.second=8;
    // cout<<p1.first<<" "<<p1.second;
    mp.insert(p1);
    mp.insert(p2);
    mp.insert(p3);
    for(sho x:mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
}