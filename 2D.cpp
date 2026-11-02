#include<iostream>
using namespace std;

void rowsum(int arr[3][3],int row, int col){
        for(int row = 0;row<3;row++){
            int sum = 0;
            for(int col = 0;col<3;col++){
                sum = sum + arr[row][col];
            }

            cout<<sum;
            cout<<endl;
        }
        
}


void colsum(int arr[3][3], int row, int col){
   
    for(int col = 0;col<3;col++){
        int sum = 0;
        for(int row = 0;row<3;row++){
            sum = sum+arr[row][col];
           
        }
        cout << sum;
        cout<<endl;
    }
}


void largestrowsum(int arr[3][3], int row, int col){
    int maxi = INT32_MAX;
    int index = -1;
    for(int row = 0;row<3;row++){
        int sum = 0;
        for(int col = 0;col<3;col++){
                sum = sum + arr[row][col];
        }
        if(sum<maxi){
            maxi = sum;
            index = row;
        }
    }

    cout<<maxi<<endl;
    cout<<index;
}
int main(){
//int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int arr[3][3];
for(int row = 0;row<3;row++){
    for(int col = 0; col<3;col++){
        cin>>arr[row][col];
        
        }
}



for (int row = 0; row < 3; row++)
{
    for (int col = 0; col < 3; col++)
    {
        cout<< arr[row][col];
    }
    cout << endl;
}
cout << "rowsum" << endl;
;
rowsum(arr, 3, 3);

cout << "col sum" << endl;
;
colsum(arr, 3,3);

cout<<"largest rowsum"<<endl;
largestrowsum(arr,3,3);

    return 0;
}
