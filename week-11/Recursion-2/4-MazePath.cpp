//return the no of ways 
//using 4 Variables
#include<iostream>
using namespace std;
maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);

return rightways+downways;
    
}
void printPath(int sr,int sc,int er,int ec,string s){
   if(sr>er || sc>ec) return ;
    if(sr==er && sc==ec){
        cout<<s<<" "<<endl;
         return ;
         }
 printPath(sr,sc+1,er,ec,s+'R');
 printPath(sr+1,sc,er,ec,s+'D');

return ;
}
int main(){
cout<<"There are "<<maze(0,0,2,2)<<" ways"<<endl;
printPath(0,0,2,2,"");//passing a matrix
    return 0;
}