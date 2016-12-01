#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
int data;
struct node* left;
struct node* right;
};

struct node* newNode(int data) {
struct node* node = (struct node*)malloc(sizeof(struct node));
node->data = data;
node->left = NULL;
node->right = NULL;
return node;
}

void printPreOrder(struct node* root)
{
if(root!=NULL)
{
cout<<root->data;
printPreOrder(root->left);
printPreOrder(root->right);
}
}

void printPostOrder(struct node* root)
{
if(root!=NULL)
{
printPostOrder(root->left);
printPostOrder(root->right);
cout<<root->data;
}
}

void printInOrder(struct node* root)
{
if(root!=NULL)
{
printInOrder(root->left);
cout<<root->data;
printInOrder(root->right);
}
}
int main()
{
struct node* root = newNode(1);
root->left = newNode(2);
root->right = newNode(3);
root->left->left = newNode(4);
root->left->right = newNode(5);
printPreOrder(root);
cout<<"\n";
printPostOrder(root);
cout<<"\n";
printInOrder(root);
cout<<"\n";
return 0;

}
