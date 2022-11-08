#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node* left;
	node* right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* insertInBST(node* root, int d) {
	if (!root) {
		root  = new node(d);
		return root;
	}

	if (root->data >= d) {
		root->left = insertInBST(root->left, d);
	}
	else {
		root->right = insertInBST(root->right, d);
	}
	return root;
}
// 8 3 10 1 6 14 4 7 13 -1
node* createBST() {
	int data;
	cin >> data;
	if (data  == -1) {
		return NULL;
	}
	node* root = NULL;
	while (data != -1) {
		root = insertInBST(root, data);

		cin >> data;
	}
	return root;
}


void preorder(node* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root) {
	if (root == NULL) {
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void postorder(node* root) {
	if (root == NULL) {
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}
void printRange(node* root, int k1, int k2){
    if(root==NULL){
        return;
    }
    printRange(root->left, k1, k2);
    if(root->data>=k1 and root->data<=k2)cout<<root->data<<" ";
    printRange(root->right,k1,k2);
}

node* searchBST(node* root, int key){
    // base case
    if(!root)return NULL;

    // recursive case
    if(root->data==key){
        return root;
    }
    else if(root->data>key){
        return searchBST(root->left,key);
    }
    else{
        return searchBST(root->right,key);
    }
}

int main() {

	node* root = createBST();

	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
    printRange(root,4,10);
    cout<<endl;
    node* ans = searchBST(root,14);
    if(ans){
        cout<<ans->data<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
	return 0;
}