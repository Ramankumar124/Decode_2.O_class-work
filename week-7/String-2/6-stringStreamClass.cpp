#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>

using namespace std;

int main(){

string s="raman is a student";
stringstream ss(s);//ss ne s ko utha lia
string temp;
while(ss>>temp){// ss se input lelo temp
cout<<temp<<endl;

}


    return 0;
}