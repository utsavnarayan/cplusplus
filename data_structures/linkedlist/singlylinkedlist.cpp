#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
int data;
struct node *next;
};


void printList(struct node *head)
{
struct node *current_node = head;
while(current_node != NULL)
{
cout<<current_node->data;
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
printList(head);
return 0;
}
