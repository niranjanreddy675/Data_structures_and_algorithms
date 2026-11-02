#include<iostream>
using namespace std;

class encap{
     
    private:
      
      char a;

    public:
        int n;
        int s;
        char b;

        void setdata(int n)
        {

            n = n;
            cout << "the value of n is " << n << endl;
        }

       void getdata(){
        cout<<"the value of n is"<<n<<endl;
       }





};
int main(){

    encap obj;
    obj.setdata(4);

return 0;
}