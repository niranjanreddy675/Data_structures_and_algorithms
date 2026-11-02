#include<iostream>
using namespace std;

class one{
      public:
      void abc(){
        cout<<"inside class one"<<endl;
      }  
};

class two {
    public:
    void abc(){
        cout<<"inside class two"<<endl;
        }
    };

    class three : public one,public two{
        public:
      void abc(){  cout<<"inside class three"<<endl;}

    };
int main(){

    three obj;
    obj.three::abc();

return 0;
}