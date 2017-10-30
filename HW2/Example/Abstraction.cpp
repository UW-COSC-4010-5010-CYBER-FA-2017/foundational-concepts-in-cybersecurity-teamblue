/*
 * This class contains methods that can't be accessed publicly;
 *  the constructor handles that. On top of that, the user enters
 *  in information and doesn't have to worry about the intricate details
 *  behind the SimpleObject class in order to give it information and return
 *  the information.
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
  // The setter methods are private because they are considered clutter
  // and we don't want the user to have to worry about it
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

public:
  // The constructor calls all of the private methods so the user
  // doesn't have to worry about the clutter.
  SimpleObject(string color, int size, int sides, string owner)
  {
    setSize(size);
    setColor(color);
    setSides(sides);
    setOwner(owner);
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
  cout << "Enter a color: ";
  cin >> color;
  cout << "Enter your name: ";
  cin >> owner;
  cout << "Enter the number of sides: ";
  cin >> sides;
  cout << "Enter the size: ";
  cin >> size;
  cout << endl;

  SimpleObject simple(color, size, sides, owner);
  cout << "Object Details:\n";
  simple.getObject();

  return 0;
}
