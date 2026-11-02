#include<iostream>
using namespace std;

int sieve(bool prime[], int n){
    int count=0;
    for(int i = 2;i<n;i++){

        prime[i] = 1;
    }

    for(int i = 0;i<n;i++){
        if(prime){
            count++;
            for(int j = i*2;j<n;j=j+i){
                prime[j] = 0;
            }
        }
    }

    prime[1] = prime[0] = 0;
    cout<<count;
}

int main(){
    bool prime[40] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
    int n ;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    sieve(prime,n);




}