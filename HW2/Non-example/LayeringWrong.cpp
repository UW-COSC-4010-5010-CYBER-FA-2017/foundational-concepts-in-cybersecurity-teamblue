#include <iostream>

using namespace std;

int main()
{
	string name;
	// Ask for user name
	cout << "Who are you? [Know users: Dave, !Dave]" << endl;
	cin >> name;
	if(name == "Dave") // Is  user known?
	{
		cout << "Affirmative, Dave. I read you." << endl; // Great, here are the keyes
		return 0;
	}
	else
	{
		cout << "!Dave, this conversation can serve no purpose anymore. Goodbye." << endl;
		// User not known
		return 1;
	}
}