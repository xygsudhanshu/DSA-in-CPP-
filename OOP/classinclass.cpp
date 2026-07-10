#include<iostream>
using namespace std;
class Gun{
    int ammo;
    int damage;
    int scope;
};
class player{
     private:
     int health;
     int age;
     int score;
     bool alive;
     Gun gun;
     class Helmet{
        private:
          int hp;
          int level;
        public:
        // setter for hp and level
        void sethp(int hp){
            this->hp=hp;
        }
        void setlevel(int level){
            this->level=level;
        }
        // getter for hp and level
        int gethp(){
            return hp;
        }
        int getlevel(){
            return level;
        }

     };
     Helmet helmet;
     public:
    //  setter for health,age,score,alive,gun,Helmet;
    void sethealth( int health){
        this->health=health;
    }
    void setage( int age){
        this->age=age;
    }
    void setscore(int score){
        this->score=score;
    }
    void setalive( bool alive){
        this->alive=alive;
    }
    void setgun( Gun gun){
        this->gun=gun;
    }
    void setHelmet(int level){
        Helmet* helmet=new Helmet;
        helmet->setlevel(level);
        int health=0;
        if(level==1) health=25;
        else if(level==2) health=50;
        else if(level==3) health=100;
        else cout<<"invalid level!!";
        helmet->sethp(health);
        this->helmet=*helmet;
    }


};