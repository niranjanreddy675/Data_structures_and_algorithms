#include<iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;
    for(int i = 1; i<=b; i++){
        ans = ans*a;
    }
    cout<<ans;
}
int main(){

    int num1;
    cin>>num1;

    int num2;
    cin>>num2;

    power(num1, num2);


return 0;
}