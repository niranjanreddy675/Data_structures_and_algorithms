#include<iostream>
using namespace std;
int main(){


    int i = 0;
    int array[100];

    while(i<100){
        array[i] = {1};
        i++;
    }

    int n;
    cout<<"the value of n is"<<endl;
    cin>>n;

    cout<<array[n];



return 0;
}