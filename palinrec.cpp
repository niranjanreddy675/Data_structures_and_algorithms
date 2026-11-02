#include<iostream>
using namespace std;

bool palindrome(string &s,int start,int end){

    if(start>end){
        return true;
    }

    if(s[start] != s[end]){
        return false;
    }

    start++;
    end--;
    palindrome(s,start,end);

}
int main(){

    string s = "";
    int ans = palindrome(s,0,s.length()-1);


    if(ans){
        cout<<"it is a palindrome"<<endl;
    }
    else{
        cout<<"it is not a palindrome"<<endl;
    }

return 0;
}