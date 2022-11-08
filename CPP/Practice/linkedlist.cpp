#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int d){
        data = d;
        next = NULL;
    }
};
int lengthLL(node *head){
    int ans=0;
    while(head!=NULL){
        head=head->next;
        ans++;
    }
    return ans;
}
void insertatfront(node *head, node *tail, int data){
    if(head==NULL){
        node *n = new node(data);
        head = tail = n;
    }
    else{
        node *n = new node(data);
        n->next = head;
        head = n;
    }

}

int main()
{
    node *head=NULL, *tail = NULL;
    insertatfront(head,tail,1);
    insertatfront(head,tail,2);
    insertatfront(head,tail,3);
    insertatfront(head,tail,4);
    cout<<"Length of LL "<<lengthLL(head)<<endl;
    printLL(head)
    
    return 0;
}