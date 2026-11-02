#include<iostream>
using namespace std;

int setbit1(int a){

    int ans1 = 0;

    while(a!=0){

        int bit = a&1;
        if(bit==1){
                ans1 = ans1+bit;
        }
        a = a>>1;
    }
    
    return ans1;
}



int main(){

    int totalsetbits;

    totalsetbits = setbit1(2) + setbit1(3);
    cout<<totalsetbits<<endl;


return 0;
}  