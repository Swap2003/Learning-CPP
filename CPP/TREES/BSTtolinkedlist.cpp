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
void preorder(node* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
} 
node* createBalancedBST(int *a, int s, int e){
	// base case
	if(s>e){
		return NULL;
	}
	int m = (s+e)/2;
	node* root = new node(a[m]);
	root->left = createBalancedBST(a,s,m-1);
	root->right = createBalancedBST(a,m+1,e);
	return root;

}
class Linkedlist{
public:
    node *head, *tail;
};

Linkedlist BSTtoLL(node* root){
    Linkedlist l;
    // base case
    if(!root){
        l.head = l.tail = NULL;
        return l;
    }
    // recursive case
    if(root->left and root->right){
        Linkedlist left = BSTtoLL(root->left);
        Linkedlist right = BSTtoLL(root->right);
        left.tail->right  = root;
        root->right = right.head;
        l.head = left.head;
        l.tail = right.head;
        return l;
    }

    else if(root->left and root->right){
        Linkedlist left = 
        BSTtoLL(root->left);
        left.tail->right = root;
        l.head = left.head;
        l.tail = root;
        return l;
    }
    else if(!root->left and root->right){
        Linkedlist right = 
        BSTtoLL(root->right);
        root->right = right.head;
        l.head = root;
        l.tail = right.tail;
        return l;
    }
    else{
        l.head = l.tail=root;
        return l;
    }
}
int main()
{
    int a[]={1,2,3,4,5,6,7,10};
    int n = sizeof(a)/sizeof(int);

    node* root=createBalancedBST(a,0,n-1);
    preorder(root);
    cout<<endl;
    Linkedlist l = BSTtoLL(root);

    node* head = l.head;
    while(head){
        cout<<head->data<<"-->";
        head=head->right;
    }
    cout<<"NULL \n";
    
    return 0;
}