#include<iostream>
using namespace std;

bool binarysearch(int arr[],int s,int e,int key){
    if(s>e){
        return false;
    }

    int mid = s+e/2;

    if(arr[mid] == key){
        return true;
    }
    
    if(arr[mid]>key){
        int remainingpart = binarysearch(arr,s,mid-1,key);
        return remainingpart;
    }
    if (arr[mid] < key)
    {
        int remainingpart = binarysearch(arr, mid+1, e, key);
        return remainingpart;
    }
}
int main(){

    int arr[]= {1,2,3,4,5,6,7,8,9};
    int ans = binarysearch(arr,0,8,15);
    if(ans){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

return 0;
}