#include<iostream>
using namespace std;
class vehicle{
    public:
    int steeringsize;
    virtual void show(){
        cout<<"vehicle ka show\n";
    }
};
class bike:public vehicle{
    public:
    int handlesize;
    void show(){
        cout<<"bike ka show\n";
    }
};
int main(){
    vehicle *v;
    vehicle a;
    bike b;
    v=&b;
    v->show();
    
}