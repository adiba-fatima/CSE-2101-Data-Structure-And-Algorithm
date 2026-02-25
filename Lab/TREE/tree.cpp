//create tree, inorder, postorder, preorder
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *lchild;
    node *rchild;
};
//creating a node
node* createnode(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->lchild = NULL;
    nptr->rchild = NULL;
    return nptr;
}
//inserting a node in the tree
node* insert (node* root, int value)
{
    if(root == NULL)
    {
        return createnode(value);
    }
    else if(value <root->data)
    {
        root-> lchild = insert(root ->lchild, value);
    }
    else
    {
        root->rchild = insert(root->rchild,value);
    }
    return root;
}
//preorder
void preorder (node* root)
{
if(root!= NULL)
{
    cout<< root->data<<" ";
    preorder(root->lchild);
    preorder(root->rchild);
}
}
//inorder
void inorder (node* root)
{
    if(root != NULL)
    {
        inorder(root->lchild);
        cout<<root->data<<" ";
        inorder(root->rchild);
    }
}
//postorder
void postorder (node* root)
{
    if(root !=NULL)
    {
        postorder(root->lchild);
        postorder(root->rchild);
        cout<<root->data<<" ";
    }
}
int main()
{
    node* root = NULL;
    int n, item; //value to be inserted
    cout<< "Number of elements:";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>item;
        root = insert(root, item);
    }
    cout<<"Preorder Traversal: ";
    preorder(root);
    cout<<"\nInorder Traversal: "; 
    inorder(root);
    cout<<"\nPostorder Traversal: ";
    postorder(root);
    return 0;

}
