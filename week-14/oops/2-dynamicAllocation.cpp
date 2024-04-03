#include<iostream>
using namespace std;

// program which demonstrate the concept of getter and setter with passing object as argument
class score{

    private:
    int kills;
    int damage;
    public:
   //geter 
    int getKills(){
        return kills;
    }
    int getDamage(){
        return damage;
    }

    void setKills(int kill){
        this->kills=kill;
    }

    void setDamage(int damg){
        this->damage=damg;
    }
};



// returning object 

int main(){

score a,b;
a.setDamage(50);
a.setKills(15);
b.setDamage(42);
b.setKills(23);

//dynamic allocation

score *c =new score; // stores in heap memory insted of stack memory
// we cant direct access it so will we use again a object

score c1= *c; // contains the value of c

c1.setKills(69);
cout<<c1.getKills();



return 0;
}

// "In this program, variables 'a' and 'b' store their values before the execution of the program, while variable 'c' stores its value during runtime."