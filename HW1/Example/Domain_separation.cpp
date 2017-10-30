/*
 * Proper Domain separation
 */

#include <iostream>

using namespace std;

int main()
{
  int test_data = 1, real_data = 0;
  int data = test_data;
  bool success = 0;
  bool realTest = 0;

  if((test_data == 1) && success)
  {
  cout << "The test data is correct. Now testing real data.Succes\n";
  realTest = 1;
  return 1;
  }
  else if((test_data == 1) && !success)
  {
    cout << "The test data failed. Keep testing the test data.\nTry Again";
    return 2;
  }
  else if(real_data)
  {
    cerr << "Don't test the real data before the test data!\nFailure: ";
    return -1;
  }

  cerr << "Didn't test anything.\n";
  return 0;
}
