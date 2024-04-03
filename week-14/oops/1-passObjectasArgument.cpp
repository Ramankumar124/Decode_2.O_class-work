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

// passing object as argument

int totScore(score s1,score s2){
   return s1.getDamage() + s2.getDamage();
}

// returning object 

score maxKIll(score s1,score s2){
    if(s1.getKills() > s2.getKills()) {
        return s1;
    }
    else return s2;   // here we are returning whole object
}

int main(){

score a,b;
a.setDamage(50);
a.setKills(15);
b.setDamage(42);
b.setKills(23);

cout<<totScore(a,b)<<endl;


// we can't cout the returing object becouse its not int ,char data type so we will use another 
// object to store it 

score temp=maxKIll(a,b);
cout<<temp.getKills();     // accessing methods of class using dot operator</s
    return 0;
}