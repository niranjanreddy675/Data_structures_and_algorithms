#include <iostream>
using namespace std;

int minele(int arr[], int size)
{
    int maxele = INT32_MIN;
    int minele = -1;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] > maxele)
        {
            minele = maxele;
            maxele = arr[i];
        }
    }

    return minele;
}
int main()
{

    int arr[13] = {12, 56, 33, 97, 50, 15, 90, 100, 45, 54, 102, 112, 200};

    int ans = minele(arr, 13);
    cout << ans;
    return 0;
}