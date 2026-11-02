#include<iostream>
using namespace std;
int main(){

char ch = '1';

int num = 1;

switch(ch){
    case 1:
    cout<<"the number is  one"<<endl;

    case '1':
    switch(num){
        case 1:
        cout<<"the value of number is"<<num<<endl;
        break;
    }
    break;

    default:
    cout<<"none of the above"<<endl;
}
return 0;
}

// continue statement is used to skip the current iteration.