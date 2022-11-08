#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data = d;
        left = right = NULL;
    }
};

node* createTree(){
    //base case:
    int data;
    cin>>data;
    if(data ==-1){
        return NULL;
    }

    //recursive case:
    node* root = new node(data);
    root -> left = createTree();
    root -> right = createTree();
    return root;
}

void preorder(node* root){
    if(root == NULL){
        return ;
    }
    cout<< root -> data <<" ";
    preorder(root -> left);
    preorder(root -> right);
}

void inorder(node* root){
    if(root == NULL){
        return ;
    }
    inorder(root -> left);
    cout<< root -> data <<" ";
    inorder(root -> right);
}

void postorder(node* root){
    if(root == NULL){
        return ;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout<< root -> data <<" ";
}
int countNodes(node* root){
    // base case
    if (!root) return 0;

    //recursive case
    int leftKaCount = countNodes(root->left);
    int rightKaCount = countNodes(root->right);
    return leftKaCount + rightKaCount + 1;
    
}
int height(node* root){
    if (!root) return 0;
    return max(height(root->left), height(root->right))+1;
    
}
int diameter(node* root){
    if(!root) return 0;

    int op1 = height(root->left) + height(root->right);
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);
    return max(op1, max(op2, op3));
}

class Pair{
public:
    int height;
    int diameter;
};

Pair fastDiameter(node* root){
    Pair ans;
    if(!root){
        ans.height = ans.diameter=0;
        return ans;
    }
    Pair left = fastDiameter(root->left);
    Pair right = fastDiameter(root->right);

    ans.height  = max(left.height, right.height)+1;
    int op1 = left.height + right.height;
    int op2 = left.diameter;
    int op3 = right.diameter;

    ans.diameter = max(op1, max(op2, op3));
    return ans;

}

void mirror(node *root){
    if(!root) return;
    swap(root->left, root->right);
    mirror(root->left);
    mirror(root->right);

}

int main(){
    
    node* root = createTree();

    mirror(root);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;

    // cout<<"Total Nodes "<<countNodes(root)<<endl;
    // cout<<"Tree Heights "<<height(root)<<endl;
    // cout<<"Tree Diameter "<<diameter(root)<<endl;

    // Pair ans = fastDiameter(root);
    // cout<<"Tree Heights "<<ans.height<<endl;
    // cout<<"Tree Diameter "<<ans.diameter<<endl;
    
    return 0;
}