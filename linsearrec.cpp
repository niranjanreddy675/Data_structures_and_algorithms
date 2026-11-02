#include<iostream>
using namespace std;

bool linearsearch(int arr[],int n, int key){

    if(n == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }
    else{
        int remainingpart = linearsearch(arr+1,n-1,key);
        return remainingpart;

    }
}
int main(){
    int arr[]= {1,2,3,4,5,6,7,8,9};

    int ans = linearsearch(arr,9,10);

    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

return 0;
}