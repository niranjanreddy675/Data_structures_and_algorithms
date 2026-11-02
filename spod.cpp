#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;

int product = 1;
int sum = 0;

while(n!=0){
    int rem = n%10;
    n = n / 10;
    sum = sum+rem;
    product = product*rem;

    //n = n / 10;
}

cout<<"the sum is"<<sum<<endl;
cout<<"the product is"<<product<<endl;

int answer = product - sum;

cout<<answer;
return 0;
}