#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;

int i = 0;

int sum = 0;
int product = 1;

while(n != 0){

    int digit  = n%10;
    sum = sum+digit;
    product = product*digit;
    n = n/10;

}

cout<<sum<<endl;
cout<<product<<endl;

int answer = product - sum;
cout<<answer;


return 0;
}