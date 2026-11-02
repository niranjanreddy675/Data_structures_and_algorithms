#include<iostream>
using namespace std;

int reverse(string &s,int start,int end){

    if(start>end){
        return true;
    }

    swap(s[start],s[end]);
    start++;
    end--;
    reverse(s,start,end);


}
int main(){

    string s = "abcde";
    reverse(s,0,s.length()-1);
    cout << s;

    return 0;
}