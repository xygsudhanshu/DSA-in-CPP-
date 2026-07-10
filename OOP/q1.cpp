#include<iostream>
#include<vector>
using namespace std;
class book{
     public:
     string name;
     int price;
     int npage;
     int countbook(int p){
        
        if(price<p) return 1; 
        else return 0;
     }
     bool isbookpresent(string title){
        
        if(name==title) return true;
        else return false;
        
     }
};
int main(){
          book harry,pott,batman,super,saka;
          harry.name="Harry";
          harry.price=120;
          harry.npage=500;
          pott.name="pott";
          pott.price=120;
          pott.npage=500;
          batman.name="batman";
          batman.price=120;
          batman.npage=500;
          super.name="super";
          super.price=120;
          super.npage=500;
          saka.name="saka";
          saka.price=120;
          saka.npage=500;
          cout<<saka.countbook(400)<<endl;
          cout<<saka.isbookpresent("saka")<<endl;
}