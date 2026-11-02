#include<iostream>
using namespace std;

int update(int &n){
    n = n+1;
}
int main(){

    int i = 5;

    int &j = i;

    cout<<"value of j before update is"<<j<<endl;

    update(j);
    cout<<"the value of j after update is"<<j<<endl;
    cout<<"\v";
    cout<<"before update"<<i<<endl;

    update(i);

    cout<<"after update"<<i<<endl;

return 0;
}