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

struct node* deleteFirstNode(struct node* head)
{
struct node* newHead = head->next;
free(head);
return newHead;
}

void deleteNode(struct node *ptr)
{
struct node *tmp_ptr = ptr->next;
ptr->data=ptr->next->data;
ptr->next=ptr->next->next;
free(tmp_ptr);
}

void findLastNthNode(struct node *head, int n)
{
struct node *lastNthNode = head;
struct node *currentNode = head;
int i=n-1;
while(i>0)
{
currentNode=currentNode->next;
i--;
}

while(currentNode->next)
{
lastNthNode=lastNthNode->next;
currentNode=currentNode->next;
}
cout<<"\n"<<"Last "<<n<<" node:"<<lastNthNode->data<<"\n";
}

void printList(struct node *head)
{
struct node *current_node = head;
cout<<"\nThe list is:\n";
while(current_node != NULL)
{
cout<<current_node->data<<" ";
current_node = current_node->next;
}
cout<<"\n";
}

struct node* reverseListRecursive(struct node *head)
{
if (head==NULL || head->next==NULL)
{
return head;
}
// reverse rest
struct node *newHead = reverseListRecursive(head->next);
// 1->2<3<4
head->next->next = head;
head->next=NULL;

return newHead;
}

struct node* reverseListIterative(struct node *head)
{
struct node *current_node = head;
struct node *next_node = NULL;
struct node *prev_node = NULL;
while (current_node!=NULL)
{
next_node=current_node->next;
current_node->next=prev_node;
prev_node=current_node;
current_node=next_node;
}
return prev_node;
}

int length(struct node *head)
{
if(head->next==NULL)
{
return 1;
}
return 1 + length(head->next);
}

struct node* getNthNode(struct node* head, int n)
{
struct node* ptr=head;
while(n>1)
{
ptr=ptr->next;
n--;
}
return ptr;
}

int main()
{
struct node *head, *second, *third; 
head = (struct node*)malloc(sizeof(struct node));
head->data = 11;
head->next=NULL;
addNodeAtStart(10,&head);
addNodeAtStart(9,&head);
addNodeAtStart(8,&head);
addNodeAtStart(7,&head);
addNodeAtStart(6,&head);
addNodeAtStart(5,&head);
addNodeAtStart(4,&head);
addNodeAtStart(3,&head);
addNodeAtStart(2,&head);
addNodeAtStart(1,&head);
printList(head);
//deleteNode((head->next));
//struct node* newHead = reverseListIterative(head);
//printList(newHead);
//struct node* originalHead = reverseListRecursive(newHead);
//printList(originalHead);
//int len = length(head);
//cout<<"Length of linked list is: "<<len<<"\n";
//struct node* newHead = deleteFirstNode(head);
//printList(newHead);
//len=length(newHead);
//cout<<"Length of linked list is: "<<len<<"\n";
struct node* node5 = getNthNode(head, 5);
cout<<"Node 5 is: "<<node5->data;
return 0;
}

