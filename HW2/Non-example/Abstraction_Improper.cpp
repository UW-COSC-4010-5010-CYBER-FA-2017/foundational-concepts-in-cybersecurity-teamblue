/*
 * This class contains methods that can only be accessed
 * publicly.
 */

#include <iostream>
#include <string>

using namespace std;

// This class contains a lot of private functions that are called by the constructor
// This is so that the clutter (other member functions) are hidden from the user.
class SimpleObject
{
private:
  string _color, _owner;
    int _size, _sides;

public:
  // The constructor doesn't do anything
  SimpleObject() { }

  // The setter methods aren't private because this class doesn't implement abstraction properly
  void setSize(int size)
  {
    _size = size;
  }
  void setColor(string color)
  {
    _color = color;
  }
  void setSides(int sides)
  {
    _sides = sides;
  }
  void setOwner(string owner)
  {
    _owner = owner;
  }
  // Returns information about the object
  void getObject()
  {
    cout << "Size: " << _size << endl
         << "Sides: " << _sides << endl
         << "Color: " << _color << endl
         << "Owner: " << _owner << endl;
  }
};

int main()
{
  string color, owner;
  int size, sides;
  SimpleObject simple;

  cout << "Enter a color: ";
  cin >> color;
  cout << "Enter your name: ";
  cin >> owner;
  cout << "Enter the number of sides: ";
  cin >> sides;
  cout << "Enter the size: ";
  cin >> size;
  cout << endl;

  // object details have to manually be called here since the class isn't abstract.
  simple.setColor(color);
  simple.setSize(size);
  simple.setOwner(owner);
  simple.setSides(sides);

  cout << "Object Details:\n";
  simple.getObject();

  return 0;
}
