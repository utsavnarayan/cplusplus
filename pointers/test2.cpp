#include <iostream>

using namespace std;

void print_arr(double* ptr, int size)
{
for(int i=0;i<size;i++)
{
cout<<*ptr<<"\n";
ptr++;
}

}


int main() {
int new_arr[5]={1,2,3,4,5};
int (*new_p)[5] = &new_arr;
cout<<new_arr<<"\n";
cout<<&new_arr;
//new_p=&new_arr[0];

int size=0;
cout<<"Enter size of array\n";
cin>>size;
double* ptr=NULL;
double *arr = new double(size);
for(int i=0;i<size;i++)
{
cout<<"Enter element number: "<<i<<"\n";
cin>>arr[i];
}
print_arr(arr,size);
delete[] arr;
return 0;
}
