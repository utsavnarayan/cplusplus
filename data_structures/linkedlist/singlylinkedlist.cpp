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

void addNodeAfter(int data, struct node *prevNode)
{
struct node *newNode = (struct node*)malloc(sizeof(struct node));
newNode->data=data;
newNode->next=prevNode->next;
prevNode->next=newNode;
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
second = (struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));
head->data = 5;
head->next=second;
second->data=10;
second->next=third;
third->data=15;
third->next=NULL;
addNodeAtStart(4,&head);
addNodeAtStart(3,&head);
addNodeAtStart(2,&head);
addNodeAtStart(1,&head);
addNodeAfter(11,second);
printList(head);

return 0;
}

