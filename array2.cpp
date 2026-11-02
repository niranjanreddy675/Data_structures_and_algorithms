#include<iostream>
using namespace std;

void printarray(int arr[], int size){
    cout<<"printing the number"<<endl;

for(int i = 0; i<size; i++){
    cout<<arr[i]<<" ";
}
cout<<"printing done"<<endl;
}


int main(){

    int third[15] = {2,7};
    int n = 15;
    printarray(third, 15);

    int fourth[10] = {0};
     n = 10;
    printarray(fourth, 10);

return 0;
}