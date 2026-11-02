#include<iostream>
using namespace std;

int path(int scr, int dest){

    cout<<"source "<<scr<<" destination "<<dest<<endl;
    if(scr == dest){
        cout<<"reached"<<endl;
        return scr;
        
        
    }
    scr++;
    path(scr,dest);
}
int main(){

    int a = 10;
    int b = 1;
    path(b,a);

return 0;
}