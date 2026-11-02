#include<iostream>
#include<string>
using namespace std;

char tolowercase(char ch){
    if(ch>='A'&&ch<='z'){
        int temp = ch-'A'+'a';
    }
    else{
        return ch;
    }
}

bool palindrome(string s){
        int st = 0;
        int e = s.length()-1;
        while(st<=e){
            if(s[st] != s[e]){
                return 0;
            }
            else{
                st++;
                e--;
            }
        }
        return 1;
}
int main(){

    
    
    return 0;
}