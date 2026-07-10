#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
     unordered_map<string,int> mp={{"Rahul",23}};
     mp["sudhanshu"]=8;
     mp["Rohit"]=23;
     mp["Mohit"]=15;
     mp["Radhe"]=43;

     cout<<mp.size()<<endl;
     if(mp.find("Rahul")!=mp.end()) cout<<"exist"<<endl;
     else cout<<"does not exists"<<endl;
     for(auto x:mp){
        cout<<x.first<<" "<<x.second<<endl;
     }
}