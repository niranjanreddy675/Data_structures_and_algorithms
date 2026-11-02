#include<iostream>
using namespace std;

int update(int *n)
{
    *n = *n + 1;
    //cout<<n<<endl;
}

int sum(int arr[],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum = sum+arr[i];
    }
    return sum;
}
int main(){

/*int temp[] = {1,2};

cout<<sizeof(temp)<<endl;
cout<<sizeof(*temp)<<endl;
cout<<sizeof(&temp)<<endl;

int *ptr = &temp[0];

cout<<"address"<<temp<<endl;

cout<<sizeof(ptr)<<endl;
cout<<sizeof(*ptr)<<endl;
cout<<sizeof(&ptr)<<endl;*/

/*int a[20]={1,2,3,4};

cout<<a<<endl;
cout<<&a[0]<<endl;
cout<<&a<<endl;


int *p = &a[1];

cout<<p<<endl;
cout<<*p<<endl;
cout<<&p<<endl;*/

/*int arr[] = {1,2,3,4};
char ch[] = "abcdef";

cout<<arr<<endl;
cout<<ch<<endl;


char *c = &ch[0];
cout<<c<<endl;
cout<<ch[0]<<endl;


cout<<arr[0]<<endl;

char temp = 'z';
char *p = &temp;

cout<<p<<endl;
cout<<temp<<endl;*/

int n = 5;

int *p = &n;
cout<<"before"<<n<<endl;
update(p);
cout<<"after"<<n<<endl;

int arr[] = {1,2,3,4,5};

int ans = sum(arr+2, 3);
cout<<ans;
}