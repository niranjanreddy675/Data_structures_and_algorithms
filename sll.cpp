#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node *next;

    node(int data){
        this->data = data;
        this ->next = NULL;
    }

    ~node(){
        int value = this->data;

        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<value<<endl;
    }
};

void insertathead(node* &head,int d){
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertattail(node* &tail,int d){
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void print(node* &head){
    if(head == NULL){
        cout<<"list is empty"<<endl;
    }

    node *temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

 void insertatposition(node* &head, node* &tail, int position,int d){

    if(position == 1){
        insertathead(head,d);
        return;
    }
    
    node *temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertattail(tail,d);
        return ;
    }

    node *nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void deletenode(node*&head,int position){
    if(position == 1){
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        node *curr = head;
        node *prev  = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        if(curr->next = NULL){
            curr = prev;
        }



        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

        
    }
}


int main(){

  /*  node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    print(head);
    insertathead(head,11);
    print(head);
    insertathead(head,30);
    print(head);*/

   /* node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    print(head);

    insertattail(tail,20);
    print(head);
    insertattail(tail,30);
    print(head);*/


    node* node1 = new node(10);
    node* head  = node1;
    node* tail = node1;
    print(head);

    insertathead(head,20);
    print(head);

       insertathead(head,30);
       print(head);

       insertathead(head, 40);
       print(head);

       insertattail(tail, 50);
       print(head);

       insertattail(tail, 60);
       print(head);

       insertattail(tail, 70);
       print(head);

       insertatposition(head, tail, 8, 100);
       print(head);

     
       deletenode(head,8);
       print(head);



       return 0;
}