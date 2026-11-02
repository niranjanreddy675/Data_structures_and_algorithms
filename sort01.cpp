#include<iostream>
using namespace std;

void sortarr(int arr[], int n){
    int i = 0; 
    int j = n-1;
    while(j>i){
        if(arr[i] == 1 && arr[j] == 0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i] == 0){
            i++;
        }
        else{
            j--;
        }
    }
}

void printarr(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i];
    }
}
int main(){

    int arr[8] = {1,1,0,0,0,0,1,0};

    sortarr(arr, 8);
    printarr(arr, 8);



return 0;
}