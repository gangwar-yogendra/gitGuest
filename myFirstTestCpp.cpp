/* Comment test check
   This below function will return the 
   size of array of anytype
*/



#include <iostream>

using namespace std;

template <class T, size_t count>
size_t getArrSize(T (&arr)[count])
{
   return (sizeof(arr)/sizeof(T));
}

int main()
{
   int arr[] = {1, 2, 3, 4};
   cout<<getArrSize<int>(arr)<<endl;
}

