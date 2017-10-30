/*
 * To illustrate Simplicity, a siple function is implemented that contains
 * self documenting code and plenty of necessary comments
 */

#include <iostream>

using namespace std;

// Loops is a function that returns the number of times a loop occurs within it.
// The integer value passed into the function parameter will determine how many
// times the loop occurs. So the value returned should be the same as the value
// passed in.
int loops(int count);

int main()
{
  int count = 5;
  // Call the function and pass in the value 5
  // the function should loop 5 times and return the value 5
  cout << "Looping " << loops(count) << " times." << endl;

  return 0;
}

int loops(int count)
{
  int i;
  // The looping begins here
  for(i = 0; i < count; ++i)
  {
    // if i == 0, output this string, otherwise output a slightly different string
    // containing information on the current loop iteration.
    if(i > 1)
      cout << i << " loops." << endl;
    else
      cout << i << " loop." << endl;
  }

  // Return i which represents the number of times the loop occurs.
  // This should match the value passed in if the function is correctly programmed.
  return i;
}
