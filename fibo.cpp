#include<iostream>
using namespace std;
int main(){

int a = 0;
int b = 1;
int n;
cin>>n;

cout<<a<<" "<<b<<" ";

for(int i = 0; i<=n;i++){
        int newnumber = a+b;
        cout<<newnumber<<" ";

        a = b;
        b = newnumber;
}
return 0;
}