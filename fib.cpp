#include<iostream>
using namespace std;
int main(){

    int n = 10;
    int ans = 0;
    int a = 0;
    int b = 1;

    cout<<a<<" "<<b<<" ";
    for(int i = 0;i<n-2;i++){
        int newterm = a+b;
        a = b;
        b = newterm;

        cout<<newterm<<" ";
    }
return 0;
}