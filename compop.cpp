#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int m = n;
int mask = 0;
int answer;

//if(n == 0){return 1;}

while(m!= 0){
    mask = mask << 1;
    mask = mask | 1;

   

    m = m >> 1;
}
answer = (~n) & mask;
cout<<answer;
return 0;
}