#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~node()
    {

        if (next != NULL)
        {

            delete next;
            next = NULL;
        }
    }
};

void print(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertathead(node *&head, node *&tail, int d)
{
    if (head == NULL)
    {
        node *temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {

        node *temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertattail(node *&head, node *&tail, int d)
{
    if (tail == NULL)
    {
        node *temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertatposition(node *&head, node *&tail, int position, int d)
{

    if (head == NULL)
    {
        insertathead(head, tail, d);
        return;
    }

    node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertattail(head, tail, d);
        return;
    }

    node *nodetoinsert = new node(d);

    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}

node* reverselinkedlist(node*&head){
  
    if(head == NULL || head->next==NULL){
        return head;
    }

    node* curr = head;
    node* forward = NULL;
    node* prev = NULL;

    while(curr != NULL){
        forward = curr->next;
        curr->next = NULL;
       curr->prev = forward;
        prev = curr;
        curr = forward;
    }

    return prev;

    
}

int main()
{

    node *head = NULL;
    node *tail = NULL;

    insertathead(head, tail, 11);
    print(head);

    insertathead(head, tail, 12);
    print(head);

    insertathead(head, tail, 13);
    print(head);

    insertathead(head, tail, 14);
    print(head);

    insertathead(head, tail, 15);
    print(head);

    insertatposition(head, tail, 1, 25);
    print(head);
    insertatposition(head, tail, 2, 25);
    print(head);
    insertatposition(head, tail, 3, 25);
    print(head);
    insertatposition(head, tail, 9, 25);
    print(head);

    reverselinkedlist(head);
    print(head);
    



    return 0;

}
