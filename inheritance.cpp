/*single inheritance

#include<iostream>
using namespace std;

class one{
    private:
    int n;
    char a;

    public:
    int s;
    char z;

    void setdata(int n){
        this->n = n;
    }

    void setdata(char a){
        this->a =a;
    }

    void getdata(){
        cout<<"the value of n is"<<n<<endl;
    }

    void getdata1(){
        cout<<"the value of char is"<<z<<endl;
    }

 
};

class two : public one
{

    private:
    int a;
    int b;

    public:
     int s;

 };

int main()
{

    two niranjan;
    niranjan.setdata(5);
    niranjan.getdata();

return 0;
}*/


/*#include<iostream>
using namespace std;

class one{

    private:
    int a;
    char b;
};

class two : public one{

};


class three : public two{


};
int main(){

return 0;
}*/

/*#include <iostream>
using namespace std;

class one
{

private:
    int a;
    char b;
};

class two : public one
{
};

class three : public two,public one
{


};
int main()
{

    return 0;
}*/


//hybrid inheritance

#include<iostream> 
using namespace std;

class one
{

private:
    int a;
    char b;
};

class two : public one
{

};

class three : public one
{

};

class four : public one,public two {

};
int main()
{

    return 0;
}

