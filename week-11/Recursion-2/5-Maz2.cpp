////return the no of ways 
//using 2 Variables

#include<iostream>
using namespace std;
int maze(int er,int ec){
    if(er<1 || ec<1) return 0;
    if(er==1 && ec==1) return 1;
    int leftways=maze(er,ec-1);
    int upways=maze(er-1,ec);

    return leftways+upways;
}

void printmaze(int er,int ec,string s){
    if(er<1 || ec<1) return;
    if(er==1 && ec==1){
        cout<<s<<endl;
        return;
    }
    printmaze(er,ec-1,s+'R');
    printmaze(er-1,ec,s+'D');
    return;
}
int main(){

cout<<maze(3,3)<<endl;
printmaze(3,3,"");
    return 0;
}