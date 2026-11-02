#include<iostream>
using namespace std;
int main(){


    int num = 6;

    cout<<"the address of num is"<<&num<<endl;

    int *ptr = &num;

    cout<<"the address of the variable is"<<ptr<<endl;
    cout << "the address of the variable is" << &num<< endl;
    cout<<"the value at the above given address is"<<*ptr<<endl;

    cout<<endl;


    double d = 5.6;

    double *ptr2 = &d;

    cout << "the address of the variable is" << ptr2 << endl;
    cout << "the address of the variable is" << &d << endl;
    cout << "the value at the above given address is" << *ptr2 << endl;

    cout<<endl;


    cout<<"the size of integer"<<sizeof(num)<<endl;
    cout << "the size of pointer" << sizeof(ptr) << endl;
    cout << "the size of pointer2 is\t" << sizeof(ptr2) << endl;

    return 0;
}