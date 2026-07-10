#include<iostream>
#include<vector>
#include<string>
using namespace std;
class cricketer{
    public:
    string name;
    int age;
    int tmatch;
    int avgscore;
};
int main(){

    vector<cricketer>  cricketers;
    for (int i = 0; i < 2; i++)
    {
        cricketer *nc=new cricketer;
        cout<<"enter detail of"<<i<<"th player:";
        cin>>nc[i].name;
        cin>>nc[i].age;
        cin>>nc[i].tmatch;
        cin>>nc[i].avgscore;
        
    }
    for (int i = 0; i < 2; i++)
    {
        
        cout<<cricketers[i].name;
        cout<<cricketers[i].age;
        cout<<cricketers[i].tmatch;
        cout<<cricketers[i].avgscore;
        
    }
}
