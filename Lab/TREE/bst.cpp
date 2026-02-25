#include <iostream>
using namespace std;
struct node
{
    int data;
    node *lchild;
    node *rchild;

};
node *nptr;
node *createBST (node root, int item)
{
    if(root == NULL)
    {
        nptr = new node;
        nptr->data = item;
        nptr->lchild = NULL;
        nptr->rchild = NULL;
        root = nptr;
        return root;
    }
    else if (item < root->data)
    {
        root ->lchild =createBST (root->lchild, item);
        return root;
    }
    else if (item> root ->data)
    {
        root -> rchild =createBST (root ->rchild, item);
        return root;
    }
    else
    {
        cout<<"Duplicate item"<<endl;
        return root;
    }
    
}
int main()
{
    node *root;
    root = NULL;
    int i, item;
    for (i=0; i<5; i++)
    {
        cin>>item;
        root = createBST (root, item);
    }
    return 0;
}