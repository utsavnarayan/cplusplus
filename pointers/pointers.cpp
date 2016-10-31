#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
int a = 5;
int* b = NULL;
b=&a;
cout<<"a is stored at: "<<&a<<"\n";
cout<<"Address pointed by pointer b is: "<<b<<"\n";
cout<<"Value stored where the pointer b points to is: "<<*b<<"\n";


return 0;
}

