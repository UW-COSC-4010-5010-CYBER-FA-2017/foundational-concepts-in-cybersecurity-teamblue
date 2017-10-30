/*
 * Proper way to utilize data hiding
 */

#include <iostream>
#include <string>

using namespace std;

// This class contains standard functions, and it no longer
// contains a function the reveals intricate details about it.
class AbstractObject
{
private:
  string _color = "Blue";
  int _functions, _lines;

public:
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

  cout << "Data about 'AbstractObject' can't be used malicously because only the neccessay" << endl
       << "details about the class are known." << endl
       << "Color of object: " << ao.getColor() << endl;

  return 0;
}
