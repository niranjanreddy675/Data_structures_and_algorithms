#include<iostream>
using namespace std;

int reverse(char name[], int n){

    int s = 0;
    int e = n-1;

    while(s<e){
        swap(name[s],name[e]);
    }
}

int printrev(char name[], int n){

    for(int i = 0; i<n; i++){
        cout<<name[i];
    }
   
}
int main(){

    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    reverse(name,20);
    cout<<"the reverse of the string is"<<printrev(name,20);

return 0;
}