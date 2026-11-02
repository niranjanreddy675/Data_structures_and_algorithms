#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{

    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildtree(node* root){
    int data;
    cout<<"enter the data to be inserted"<<endl;
    cin>>data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"inserting to the left node"<<endl;
    root->left = buildtree(root->left);
    cout<<"inserting to the right node"<<endl;
    root->right = buildtree(root->right);
    return root;
}


void levelordertraversal(node* root){

    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{

            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

    }
}

void reverselevelordertraversal(node* root){

    queue<node*>q;
    stack<node*>st;

    q.push(root);
    q.push(NULL);
    while(!q.empty()){

        node* temp = q.front();
        q.pop();
        st.push(temp);

        if(temp == NULL){
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{

            if(temp->right){
                q.push(temp->right);
            }
            if(temp->left){
                q.push(temp->left);
            }
        }
    }

    st.pop();
    while(!st.empty()){
        node* temp = st.top();
        st.pop();
        

        if(temp == NULL){
            cout<<endl;
        }
        else{
            cout << temp->data << " ";
        }
    }
}


void inorder(node* root){

    if(root  == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(node* root){

    if(root == NULL){
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){

    node* root = NULL;

    root = buildtree(root);
    // levelordertraversal(root);
    // reverselevelordertraversal(root);

    cout<<"inorder traversal"<<endl;
    inorder(root);

    cout<<endl;


    cout<<"preorder traversal"<<endl;
    preorder(root);

    cout<<endl;

    cout<<"postorder traversal"<<endl;
    postorder(root);


     return 0;
}

