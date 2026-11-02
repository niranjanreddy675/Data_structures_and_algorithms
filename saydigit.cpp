#include<iostream>
using namespace std;

int saydigit(int n,string arr[]){
    if(n == 0){
        return 0;
    }

    int digit = n%10;
    n = n/10;
    saydigit(n,arr);
    cout<<arr[digit]<<" ";
}
int main(){
    int n =402;


    string arr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    saydigit(n,arr);
    
    return 0;
}