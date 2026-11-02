#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }

        
        
    }
    return 0;
}
int main(){

int arr[10]= {1,2,3,4,5,6,7,8,9,10};

cout<<"the element we are seachin for is"<<endl;
int num;
cin>>num;

bool found = search(arr, 10, num);

if(found){
    cout<<"the key is present"<<endl;
}
else{
    cout<<"the key is absent"<<endl;
}

return 0;
}