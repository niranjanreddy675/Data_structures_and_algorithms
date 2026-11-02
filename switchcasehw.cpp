#include<iostream>
using namespace std;
int main(){
int money;
cin>>money;

int notes;
int num =1;

switch(num){

    case 1:
    notes = money/100;
    cout<<"the number of 100$ notes required are"<<notes<<endl;

    case 2:
        notes = money / 50;
        cout << "the number of 50$ notes required are" << notes << endl;

    case 3:
        notes = money / 20;
        cout << "the number of 20$ notes required are" << notes << endl;

    case 4:
        notes = money / 1;
        cout << "the number of 1$ notes required are" << notes << endl;
}

}