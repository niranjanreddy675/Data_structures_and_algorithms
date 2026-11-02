#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int **arr = new int *[n];

    for(int i = 0;i<n;i++){
        arr[i] = new int[n];
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}

/*declaration of 2D arrays
 int **arr = new int *[n];

 mapping of each pointer to a array
 fo(int i = 0;i<n;i++){
 arr[i] = new int[n]

 */
