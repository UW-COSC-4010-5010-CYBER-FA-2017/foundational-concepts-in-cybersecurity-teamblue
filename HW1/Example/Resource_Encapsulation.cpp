/*
 * Proper way to conduct resource encapsulation:
 *  There is a class that is meant to be used when dealing with shapes.
 */

#include <iostream>
#include <string>

using namespace std;

class SimpleObject
{
private:
  int _sides = 4;
  string _name = "Square";

public:
  int getSides()
  {
    return _sides;
  }
  string getName()
  {
    return _name;
  }

  void setSides(int sides)
  {
    _sides = sides;
  }
  void setName(string name)
  {
    _name = name;
  }
};

int main()
{
  SimpleObject so;
  cout << " The object has " << so.getSides() << " sides" << endl
       << " and it is a " << so.getName() <<"." << endl;

  return 0;
}
