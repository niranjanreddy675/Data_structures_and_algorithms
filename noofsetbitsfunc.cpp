#include<iostream>
using namespace std;

int setbits(int n){
    
    int count = 0;
    while(n!=0){
    if(n&1  == 1){

        count++;
        n = n>>1;
    }
   
}
return count;
}
int main(){

    int a;
    cin>>a;
    int answer1 = setbits(a);
    cout<<answer1<<endl;

    //int b;
    //cin>>b;
    //int answer2 = setbits(b);
    //cout<<answer2<<endl;

    //cout<<"the total number of setbits is"<<answer1+answer2<<endl;


return 0;
}