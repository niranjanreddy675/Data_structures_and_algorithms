#include<iostream>
#include<string.h>
using namespace std;
int main(){

    string name = "niranjan";
    int count = 0;
    int countconst = 0;

    for(int i = 0; i<name.size(); i++){

        if(name[i] == 'a' ||name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'){
            count++;
        }
        else{

            countconst++;
     }
    }

    cout<<"numbers of vowels are"<<count<<endl;
    cout<<"numkber of consonants are"<<countconst<<endl;
return 0;
}