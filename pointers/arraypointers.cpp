#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int* ptr = arr;
for(int i=0;i<10;i++)
{
cout<<ptr<<" "<<*ptr<<"\n";
ptr++;
}
return 0;
}
