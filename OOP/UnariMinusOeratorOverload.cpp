#include<iostream>
using namespace std;
class a{
    public:
    int n;
    a(int val){
        n=val;
    }
    a operator -(a a1){
        a a3(this->n-a1.n);
        return a3;
    }
};
int main(){
    a a1(10);
    a a2(4);
    a a3(a1-a2);
    cout<<a3.n<<endl;
}