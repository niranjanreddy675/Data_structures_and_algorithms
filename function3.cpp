#include<iostream>
using namespace std;

int eveod(int a){

    if(a&1 == 1){

        cout<<"the number is odd"<<endl;

    }
    else{
        cout<<"the number is even"<<endl;
    }
}


int main(){

    int num;
    cin>>num;

    eveod(num);

return 0;
}