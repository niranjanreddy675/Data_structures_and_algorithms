#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelordertraversal(Node *root)
{

    if(root == NULL){
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();

        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

Node* insertintobst(Node* root,int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data>root->data){
        root->right = insertintobst(root->right,data);
    }
    else{
        root->left = insertintobst(root->left,data);
    }
    return root;
}

void takeinput(Node* &root){

    int data;
    cin>>data;

    while(data != -1){
        root = insertintobst(root,data);
        cin>>data;
    }
}

Node* minvalue(Node* root){

    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

Node* deletefrombst(Node* root,int val){
    if(root == NULL){
        return NULL;
    }

    if(root->data == val){
        //0 child

        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        //1 child

        //left child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        //right child
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        //2 child

        if(root->left != NULL && root->right != NULL){
            int min = minvalue(root->right)->data;
            root->data = min;
            root->right = deletefrombst(root->right,min);
            return root;
        }

    }
    else if(root->data>val){
        root->left = deletefrombst(root->left,val);
    }
    else{
        root->right = deletefrombst(root->right,val);
    }
}


int main(){

    Node* root = NULL;

    cout<<"enter data to create bst"<<endl;
    takeinput(root);
    levelordertraversal(root);
    root = deletefrombst(root,110);
    levelordertraversal(root);
    return 0;
}