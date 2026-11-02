#include<iostream>
using namespace std;
int main(){


int sum ;
sum = 0;
//int n;
//cin>>n;

int i = 0;

while(i<10){

    if(i%2 == 0){
        sum = sum + i;
        cout<<sum<<endl;
        
    }
    i++;

    
}

cout << "the sum of even numbers is" << sum << endl;
return 0;
}