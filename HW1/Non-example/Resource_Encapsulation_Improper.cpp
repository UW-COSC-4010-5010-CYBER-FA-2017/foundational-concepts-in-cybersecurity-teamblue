/*
 * Proper way to conduct resource encapsulation:
 *  There is a class that is meant to be used when dealing with shapes,
 *  but there also exists a function outside of the class that returns data
 *  about the object.
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

int retSides(SimpleObject c);

int main()
{
  SimpleObject so;
  cout << "The object has " << retSides(so) << " sides," << endl
       << "but this information wasn't obtained from using 'SimpleObject' functions." << endl;

  return 0;
}

int retSides(SimpleObject c)
{
  return c.getSides();
}
