#include<iostream>
#include<string.h>

using namespace std;
 
int main()
{
   int n, c;
   string input_msg = "Enter the number whose table you want: ";
   cout << input_msg;
   cin >> n;
   cout << "Table of " << n << " is:" << endl;
 
   for (c=1;c<=10;c++)
   {
      cout<<c*n<<endl;
   }
   return 0;
}
