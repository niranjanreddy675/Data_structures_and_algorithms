#include<iostream>
using namespace std;


class stack{

    public:
    int size;
    int *arr;
    int top;

    stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack undeflow"<<endl;
        }
    }

    int peek(){
        if(top>=0){

            cout<<"top element is"<<arr[top];
        }
        else{
            cout<<"stack empty"<<endl;
            return -1;
        }
    }

    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

using namespace std;
int main(){

    stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.peek();
    







































    //using stl;
    // stack<int> s;

    // s.push(5);
    // s.push(6);
    // s.push(7);

    // cout<<"the top element is"<<s.top()<<endl;
    // cout<<"is stack empty"<<s.empty()<<endl;
    // s.pop();
    // cout<<"the top element is"<<s.top();
    // s.pop();
    // s.pop();

    // cout<<"is stack empty"<<s.empty();



return 0;
}