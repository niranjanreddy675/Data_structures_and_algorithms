#include<iostream>
#include<queue>
#include<stack>
#include<vector>


using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};

node *buildtree(node *root){

    cout<<"enter the data:"<<endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"enter the data for inserting in left"<<data<<endl;
    root->left = buildtree(root->left);
    cout<<"enter the data for inserting in right"<<data<<endl;
    root->right = buildtree(root->right);

    return root;
}

void levelordertraversal(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node *temp = q.front();
       
        q.pop();


        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
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

void reverselevelorder(node *root){

    queue<node*> q;
    stack<node*> s;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        node *temp = q.front();
        s.push(temp);
        q.pop();

        if(temp == NULL){
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            if (temp->right)
            {
                q.push(temp->right);
            }

            if (temp->left)
            {
                q.push(temp->left);
            }
        }
    }

    s.pop();
   

    while(!s.empty()){
        node *temp2 = s.top();
        if(s.top() == NULL){
            cout<<endl;
        }
        else{
            cout<<temp2->data<<" ";
        }

        s.pop();
    }
}


void inorder(node *root){

    if(root == NULL){
        return ;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void inorder2(node *root){
    vector<int> ans;
    stack<node*> s;
    node *temp = root;

    while(temp != NULL || s.empty() == false){

        while(temp != NULL){
            s.push(temp);
            temp = temp->left;
        }

        temp = s.top();
        s.pop();

        ans.push_back(temp->data);
        temp = temp->right;

    }

    cout<<"the inorder traversal for the given tree is"<<endl;
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}

void preorder(node *root){

    if(root == NULL){
        return ;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void preorder2(node* root){
    vector<int> ans;
    stack<node*> s;
    s.push(root);

    while(!s.empty()){

        node* temp = s.top();
        s.pop();
        ans.push_back(temp->data);

        if(temp->right != NULL){
            s.push(temp->right);
        }
        if(temp->left != NULL){
            s.push(temp->left);
        }
    }
    cout << "the preorder traversal for the given tree is" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

void postorder(node *root){
    if(root == NULL){
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


void postorder2(node *root){

    vector<int>ans;
    stack<node*>s;
    node* temp = root;
    while(temp != NULL || !s.empty()){

        while(temp != NULL){
            s.push(temp);
            temp = temp->right;
        }

        temp = s.top();
        s.pop();
        ans.push_back(temp->data);

        temp=temp->left;
    }

    cout << "the postorder traversal for the given tree is" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

void buildfromlevelorder(node* &root){
    queue<node*> q;

    cout<<"enter data for root"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node *temp = q.front();
        q.pop();

        cout<<"enter left node for: "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata != -1){
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout << "enter right node for: " << temp->data << endl;
        int rightdata;
        cin >> rightdata;

        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}

int main(){

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node *root = NULL;
    root = buildtree(root);
    // inorder2(root);
    // preorder2(root);
    postorder(root);
    // buildfromlevelorder(root);
    // levelordertraversal(root);
    // reverselevelorder(root);

    //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    /*
    root = buildtree(root);

    // levelordertraversal(root);
    cout<<endl;
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);

    */
    return 0;
}