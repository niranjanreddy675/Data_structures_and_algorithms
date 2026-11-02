#include<iostream>
#include<math.h>
using namespace std;

int powerof2(int a,int b){


    if(a == 0){
        return 0;
    }

    if(b==0){
        return 1;
    }

    if(b==1){
        return a;
    }

    if(b%2 == 0){
        return powerof2(a,b/2)*powerof2(a,b/2);
      
    }
    else{
        return  a * powerof2(a, b / 2) * powerof2(a, b / 2);
        
    }


}
int main(){
    int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    int b;
    cout<<"enter the value of b"<<endl;
    cin>>b;
     int ans = powerof2(a,b);
     cout<<ans<<endl;

return 0;
}