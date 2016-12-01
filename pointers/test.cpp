#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
char c=177;
cout<<c<<"\n";
cout<<sizeof(char)<<"\n";
int a =5;
int* p =&a;
cout<<p<<"\n";;
++*p++;
cout<<p<<"\n";
cout<<a<<"\n";
const int b=10;
const int* const p1 = &b;
cout<<"========="<<"\n";
int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
cout<<arr<<"\n";
cout<<*(arr+2)<<"\n";
return 0;

}
