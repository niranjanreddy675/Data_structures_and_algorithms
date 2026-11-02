#include<iostream>
using namespace std;

bool sorted(int arr[],int n){

    if(n==0 || n==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        int remainingpart = sorted(arr+1,n-1);
        return remainingpart;
    }
}
int main(){

    int arr[10] = {1,2,3,4,5,7,8,9};
    int ans = sorted(arr,8);

    if(ans){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }

return 0;
}