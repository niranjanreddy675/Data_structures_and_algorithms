#include<iostream>
using namespace std;

int getlength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count = count + 1;
    }

    return count;

}
int main(){

    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    int len  = getlength(name);

    cout<<"the length of the string is"<<len<<endl;


return 0;
}