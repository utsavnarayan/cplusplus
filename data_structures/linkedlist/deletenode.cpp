#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
int data;
struct node *next;
};

void addNodeAtStart(int data, struct node **headAddress)
{
struct node *newNode = (struct node*)malloc(sizeof(struct node));
newNode->data = data;
newNode->next = *headAddress;
*headAddress = newNode;

}

void deleteNode(struct node *ptr)
{
struct node *tmp_ptr = ptr->next;
ptr->data=ptr->next->data;
ptr->next=ptr->next->next;
free(tmp_ptr);
}

void printList(struct node *head)
{
struct node *current_node = head;
while(current_node != NULL)
{
cout<<current_node->data<<" ";
current_node = current_node->next;
}
}


int main()
{
struct node *head, *second, *third; 
head = (struct node*)malloc(sizeof(struct node));
head->data = 5;
head->next=NULL;
addNodeAtStart(4,&head);
addNodeAtStart(3,&head);
addNodeAtStart(2,&head);
addNodeAtStart(1,&head);
deleteNode((head->next));
printList(head);

return 0;
}

