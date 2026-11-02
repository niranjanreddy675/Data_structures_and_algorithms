#include<iostream>
using namespace std;

int merge(int *arr,int s, int e){

    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];
     
    int k = s;
    for(int i =0;i<len1;i++){
        first[i] = arr[k];
        k++;
    }


    k = mid+1;
    for (int j = 0; j < len2; j++)
    {
        second[j] = arr[k];
        k++;
    }


    int i =0;
    int j = 0;
     k = s;
 
    while(i<len1 && j<len2){
        if(first[i]<second[j]){

            arr[k] = first[i];
            k++;
            i++;
        }
        else if(first[i]>second[j]){
            arr[k] = second[j];
            k++;
            j++;
        }
        
    }

    while(i<len1){
        arr[k] = first[i];
        i++;
        k++;
    }

    while (j < len2)
    {
        arr[k] = second[j];
        j++;
        k++;
    }

   
}

int mergesort(int *arr,int s, int e){
    if(s>=e){
        return true;
    }

    int mid = (s+e)/2;

    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){

    int arr[] = {2,9,2,86,66,71,85,32,78,11,5,4,89};

    mergesort(arr,0,12);

    for(int i = 0;i<13;i++){
        cout<< arr[i]<<" ";
    }

return 0;
}