#include<iostream>
using namespace std;
int main(){
    /*
//int *p = 0 ;

//cout<<p<<endl;

int  i =5;
int *p = &i;
cout<<"address"<<p<<endl;
cout<<"value at address"<<*p<<endl;

cout<<"\v";

int *q = 0;
q = &i;
cout << "address" << q << endl;
cout << "value at address" << *q << endl;*/

int num = 5;
int a = num;
cout<<"a before"<<a<<endl;
a++;
cout<<"a after"<<a<<endl;

int *p = &num;
cout<<"before"<<num<<endl;
(*p)++;
cout<<"after"<<num<<endl;

//copying a pointer

int *q = p;
cout<<p<<" - "<<q<<endl;
cout << *p << " - " << *q << endl;

// important concept

int  i = 3;
int *t = &i;
/*cout<<"address of i"<<t<<endl;
(*t)++;
cout<<"value "<<*t<<endl*/

*t = *t+1;
cout<<*t<<endl;
cout<<"before t"<<t<<endl;
t = t+1;
cout<<"after t"<<t<<endl;


return 0;
}