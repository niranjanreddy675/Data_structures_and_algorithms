#include<iostream>
using namespace std;
int main(){

    char ch = 'a';

   // cin>>ch;

    switch(ch){

        case 1:
        cout<<"the no. is one"<<endl;
        break;

        case '1':
        cout<<"the char is 1"<<endl;
        break;

        //case 'a':
        //cout<<"the letter is a"<<endl;

        break;

        default:
        cout<<"none of the above"<<endl;
    }

return 0;
}