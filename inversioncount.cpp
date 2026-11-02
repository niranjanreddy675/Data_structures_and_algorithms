#include<iostream>
using namespace std;

int inversioncount(int arr[],int n){

    int count  = 0;

    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){

            if(arr[i]>arr[j] && i<j){
                count++;
            
            }


        }
    }

    return count;
}

int main(){

    int arr[] = {4,3,2,1};

    int ans = inversioncount(arr, 4);

    cout<<"the value of inversion count is"<<ans;

    
        return 0;
}