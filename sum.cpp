#include<iostream>
using namespace std;
int main(){


int sum;
sum = 0;

int i = 0;
while(i<100){
    sum = sum + i;
    //cout<<sum<<endl;
    i++;
}

cout<<"the value of sum is"<<sum<<endl;
return 0;

}