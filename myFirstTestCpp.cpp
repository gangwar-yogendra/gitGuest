// Comment test check
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

