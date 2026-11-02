#include<iostream>
using namespace std;

int printnum(int n){

    if(n == 1){
       return 1;
    }

    cout<<n<<endl;

    return printnum(n-1);

}
int main(){

    int n;
    n = 5;
    cout<<printnum(5);

return 0;
}