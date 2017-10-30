/*
 * Improper way to use Data hiding
 */

#include <iostream>
#include <string>

using namespace std;

// This class contains standard functions, but it contains
// One function in particular that returns data on all of the subtle
// details about the class itself.
class AbstractObject
{
private:
  string _color = "Blue";
  int _functions, _lines;

public:
  string getDetails()
  {
    return "This abstract class contains two 3 functions, 20 lines of code, and it's color is ";
  }
  string getColor()
  {
    return _color;
  }
  void setColor(string color)
  {
    _color = color;
  }
};

int main()
{
  AbstractObject ao;

  cout << "Data about 'AbstractObject' could be used maliciously." << endl
       << "---------------------------------------------------------------------------------------" << endl
       << ao.getDetails() << ao.getColor() << "." << endl
       << "---------------------------------------------------------------------------------------" << endl;

  return 0;
}
