/* If the list to be searched contains more than a few items (a dozen, say) 
a binary search will require far fewer comparisons than a linear search, 
but it imposes the requirement that the list be sorted. 

Similarly, a hash search can be faster than a binary search 
but imposes still greater requirements. 

If the contents of the array are modified between searches, 
maintaining these requirements may even take more time than the searches. 
And if it is known that some items will be searched for much more often than others, 
and it can be arranged so that these items are at the start of the list, 
then a linear search may be the best.
*/

#include <iostream>
#include "../../sample_data.h"
using namespace std;

int binary_search(int A[], int key, int imin, int imax)
{
  // test if array is empty
  if (imax < imin)
    // set is empty, so return value showing not found
    return -1;
  else
    {
      // calculate midpoint to cut set in half
      int imid = (imin+imax)/2;
 
      // three-way comparison
      if (A[imid] > key)
        // key is in lower subset
        return binary_search(A, key, imin, imid-1);
      else if (A[imid] < key)
        // key is in upper subset
        return binary_search(A, key, imid+1, imax);
      else
        // key has been found
        return imid;
    }
}

int main ()
{
  int *arr;
  arr = get_random_arr();
  int arr_size = sizeof(arr)/sizeof(int);
  int search_value = 18;
  int result;
  result = binary_search(arr, search_value, 0, arr_size);
  if (result==-1)
    {
        std::cout<<search_value<<"value not found in the array."<<endl;

    }
  else
    {
        std::cout<<"Element found at position "<<result;
    }
}
