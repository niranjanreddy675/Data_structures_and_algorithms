#include<iostream>
using namespace std;

int sum(int arr[],int n){
    
    if(n==1){
        return arr[0];
    }

    int remainingpart;
     int ans = arr[0] + remainingpart;

    remainingpart = sum(arr + 1, n - 1);
    return remainingpart;
}
int main(){

    int arr[] = {1,2,3,4,5};
    int ANS = sum(arr,5);

    cout<<"the sum of the array is"<<ANS<<endl;


return 0;
}