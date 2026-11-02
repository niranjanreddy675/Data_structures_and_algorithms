#include<iostream>
using namespace std;

// declaration for integer array-> int *arr = new int;

// declaration for integer array with min of blocks-> int *arr = new int[5];

//declaration of character array -> char *ch = new char;
int main(){

    // creation of variable size arrays

    int n;
    cin>>n;

    int *arr = new int[n];

    //datatype *nameofarray = new datatype[variable (or) declaration];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}

/*
for deletion

1)if
int *arr = new int[];

to delete this we should use the comment
delete []arr;

2)if
int *i = new int;

to delete this we should use the comment
delete i;

*/