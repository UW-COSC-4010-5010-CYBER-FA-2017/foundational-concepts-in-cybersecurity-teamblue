/*
 * To illustrate Least privelage, there's a list that contains names of people
 *  with admin privelages. If the user enters their name and they're on the list,
 *  then they have admin privelages.
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
  // If they're an admin
  if(admin)
  {
    cout << "You're an admin. Enjoy your privelages." << endl;
  }
  else
    cout << "You're not an admin. You have limited privelages." << endl;

  return 0;
}
