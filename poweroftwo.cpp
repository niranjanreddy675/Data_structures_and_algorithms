#include<iostream>
#include<math.h>
using namespace std;
int main(){

int n;
cin>>n;

int i = 0;

while(i<=n){
        int ans = pow(2,i);

        if(ans == n){
           return true;
        }
        return false;

        
        i++;

}




return 0;
}