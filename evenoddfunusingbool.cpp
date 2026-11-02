#include<iostream>
using namespace std;

bool eveodd(int a){

    if(a&1 == 1){
            return 0;
    }
    else{
        return 1;
    }
}
int main(){


    int num;
    cin>>num;

    if(eveodd(num)){
        cout<<"the number is even"<<endl;
    }
    else{
        cout<<"the number is odd"<<endl;
    }

return 0;
}