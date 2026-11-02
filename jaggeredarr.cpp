#include<iostream>
using namespace std;
int main(){

    int rows;
    cout<<"enter no. of rows";
    cin>>rows;
    int cols;
   

    int **arr = new int *[rows];

    for(int i = 0;i<rows;i++){
       cout<<"enter number of cols";
       cin>>cols;
        arr[i] = new int[cols];
        for(int i = 0;i<rows;i++){
            for(int j = 0;j<cols;j++){
                cin >> arr[rows][cols];
            }
            cout<<endl;
            
        }
        
    }
    

    

return 0;
}