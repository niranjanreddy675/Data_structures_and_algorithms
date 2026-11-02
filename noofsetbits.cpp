#include<iostream>
using namespace std;
int main(){

int a = 3;
int b = 2;

int count1 = 0;
while(a!= 0){
if(a&1 == 1){
    count1++;
}
a = a>>1;



}
cout << count1<<endl;

int count2 = 0;
while(b!= 0)
    if(b&1 == 1){
        count2++;
    }
    b = b>>1;
   

cout<< count2<<endl;


cout<<"the number of setbits present in a and b is"<<count1 + count2<<endl;
return 0;
}