#include<stdio.h>
#include<limits.h>

int max(int arr[],int n){

    int max = INT_MIN;
    int mid = -1;

    for(int i = 0;i<n;i++){
        if(arr[i]>max){
            mid = i;
            max = arr[i];
        }
    }

    printf("%d",max);
}
int main(){


    int arr[] = {1,2,3,4,5,6,78,100};
    max(arr,8);
return 0;
}