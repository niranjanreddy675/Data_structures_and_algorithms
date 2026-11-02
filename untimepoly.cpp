#include<iostream>
using namespace std;

class one{
    public:
   void speak(){
    cout<<"spekaing"<<endl;
   }
};

class two : public one{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};
int main(){

    two obj;
    obj.speak();

return 0;
}