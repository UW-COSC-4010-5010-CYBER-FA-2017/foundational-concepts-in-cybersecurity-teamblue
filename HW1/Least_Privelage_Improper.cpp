/*
 * To illustrate the improper way to do Least privelage, there's a list that contains names of people
 *  with admin privelages. Regardless of what the user's name is, they have admin privelages,
 *  even though that right should be reserved for users on the list.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string admins[5] = {"Allie", "Jayden", "Colin", "Nick", "Jordan"};

  string user;
  bool admin = false;
  cout << "Name: ";
  cin >> user; // User enters their name

  // Check user's name on list of admins
  for(int i = 0; i < 5; ++i)
  {
    if(user.compare(admins[i]) == 0)
    {
      cout << "Welcome " << admins[i] << ".";
      admin = true;
      break;
    }
  }
  // Completely ignore the comparison made immediately before this because
  //  every user has admin privelages even though they shouldn't
  cout << "You're an admin. Enjoy your privelages." << endl;

  return 0;
}
