#include<iostream>
using namespace std;

int get_min(int arr[],int n){
    int min = INT32_MAX;
    for(int i = 0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<min<<endl;
}

int get_max(int arr[], int n)
{
    int max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout <<max<< endl;
}
int main(){

    int arr1[] = {1,2,3,4,5,6};
    get_min(arr1,6);

    int arr2[] = {1, 2, 3, 4, 5, 6};
    get_max(arr2, 6);

    return 0;
}