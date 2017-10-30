/*
 * Improper way to handle process isolation.
 * Each array represents a unique process
 */

#include <iostream>

using namespace std;

int main()
{
  //  int* arr1[5] = {1,2,3,4,5};
  //  int* arr2[5] = {6,7,8,9,10};
  int * arr1 = new int[5];
  int * arr2 = new int[5];

  for(int i = 0; i < 5; ++i)
  {
    arr1[i] = i;
  }

  for(int i = 0; i < 5; ++i)
  {
    arr2[i] = i+5;
  }

  cout << "Arrays 1 and 2 contain their own data." << endl
       << "Array 2 obtains the same address space ass array 1" << endl;

  arr2 = arr1;

  cout << "Data in array 2 is changed and it affects array 1" << endl;
  for(int i = 0; i < 5; ++i)
  {
    arr2[i] = i+12;
  }

  cout << "array1 data = ";
  for(int i = 0; i < 5; ++i)
  {
    cout << arr1[i] << " ";
  }
  cout << endl;

  cout << "The data from array's 1 and 2 overlap eachother.\n";
  delete arr2;

  return 0;
}
