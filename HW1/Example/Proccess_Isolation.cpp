/*
 * Proper way to handle process isolation.
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

  cout << "array1 = ";
  for(int i = 0; i < 5; ++i)
  {
    cout << arr1[i] << " ";
  }
  cout << endl;

  cout << "array2 = ";
  for(int i = 0; i < 5; ++i)
  {
    cout << arr2[i] << " ";
  }
  cout << endl;

  cout << "Keep the data from array's 1 and 2 separate.\n";
  delete arr1;
  delete arr2;

  return 0;
}
