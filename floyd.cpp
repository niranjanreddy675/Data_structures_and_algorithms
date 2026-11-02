#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
    }
};


node* floydcycledetectalgo(node* head){

    if(head == NULL){
        return ;
    }

    node* fast = head;
    node* slow = head;

    while(fast != NULL && slow != NULL){
        fast = fast->next;

        if(fast != NULL){
            fast = fast->next;
        }

        slow = slow->next;

        if(fast == slow){
            return slow;
        }

    }
    return NULL;
}


node* startingnode(node* head){

    node* intersection = floydcycledetectalgo(head);

    node* temp = head;

    while(temp != intersection){
        temp = temp->next;
        intersection = intersection->next;
    }
    return temp;
}

node* deleteloop(node*&head){

    node* startingpoint = startingnode(head);

    node* temp = startingpoint;

    while(temp->next != startingpoint){
        temp = temp->next;
    }

    temp->next = NULL;


}
int main(){



return 0;
}