#include<iostream>
using namespace std;

class one{

    public:
     void sayhello(){
        cout<<"good morning"<<endl;
     }

     int sayhello(string s){

        cout<<"good evening"<<endl;

     }

     void sayhello(string a,char b)
     {

         cout << "good night" << endl;
     }

};
int main(){

    one obj;
    obj.sayhello("say",'a');
return 0;
}