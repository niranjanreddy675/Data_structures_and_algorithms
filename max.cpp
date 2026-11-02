#include<iostream>
using namespace std;

void swapalter(int arr[], int n){

    for(int i = 0,j=1;i<n,j<n; i=i+2,j=j+2){

        swap(arr[i],arr[j]);
        
    }
}

void printarray(int arr[], int n){

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}
int main(){

    int arr[]={54,63,98,75,63,89};
    swapalter(arr, 6);
    printarray(arr, 6);

    int brr[] = {54, 63, 98, 75, 63};
    swapalter(brr, 5);
    printarray(brr, 5);

    return 0;
}