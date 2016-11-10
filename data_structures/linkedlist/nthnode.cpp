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
deleteNode((head->next));
int n=1;
cout<<"Which node you want to find out?";
cin>>n;
findLastNthNode(head,n);
printList(head);

return 0;
}

