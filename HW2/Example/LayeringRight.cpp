#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string pwIn;
	string name;
	cout << "Who are you? [Know users: Dave, !Dave]" << endl; // Level 1 Access (recognized user)
	cin >> name;
	if(name == "Dave") // Properly, the user name should be a cryptographic hash
	{
		cout << "I can't accept that identification without proof." << endl 
		<< "password:";
		cin >> pwIn; // 'Proof' that the user is supposed to have access
		if(pwIn == "password") // Again, should be a cryptographic hash
		{
			cout << "Affirmative, Dave. I read you." << endl;
			while (true) // Loop through functions
			{
				cout << "What would you like to do? [read_memos; read_email,"
				<<" send_email; quit]" << endl;
				cin >> pwIn; // Known users are allowed to do "things"
				transform(pwIn.begin(), pwIn.end(), pwIn.begin(), ::tolower);
				// normalize input
				if (pwIn == "read_memos")
				{
					cout << "There are no new memos." << endl;
				}
				// Some Actions could have far reaching ramifications and
				// Unintended consequences.
				else if (pwIn == "read_email" || pwIn == "send_email")
				{
					// Limit access and minimize abuse
					cout << "You will need to provide addtional proof that " 
					<< "you are Dave." << endl << "password2: ";
					cin >> pwIn; // Level 2 Access
					if (pwIn == "password2")
					{
						cout << "Thank you, Dave." << endl << "..." <<
						endl << "..." << endl << "..." << "Server Unavailable" <<
						endl; // Psudo activity... fluff
					}
					else
					{
						cout << "This action is unavailable to you." << endl; // Unknown password
					}
				}
				else if (pwIn == "quit")
				{
					return 0; // Normal exit
				}
				else
				{
					cout << "What?" << endl; // Unknown command
				}
			}
		}
		else
		{
			cout << "Just what do you thing you're doing, Dave?" << endl;
			return 2; // Wrong password
		}
		
	}
	else
	{
		cout << "!Dave, this conversation can serve no purpose anymore. Goodbye." << endl;
		return 1; // Unknown user
	}
}