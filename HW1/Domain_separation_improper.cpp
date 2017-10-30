/*
 * Improper Domain separation
 */

#include <iostream>

using namespace std;

int main()
{
  int test_data = 1, real_data = 0;
  int data = test_data;
  bool success = 0;
  bool realTest = 0;

  if(true)
  {
    cerr << "Arbitrarily testing either real data or test data without any checks.\n"
         << "The test data or real data may be correct or incorrect\n"
         << "This could cause serious issues.\n";
    return -1;
  }

cerr << "Didn't test anything.\n";
return 0;
}
