#include <iostream>
#include <string>

using namespace std;

int main()
{
	string message; //Recurrsively built Hello World message
	string input; //Blob of text from user
	char hold; // char used for comparission
	while(true) // H
	{
		cin >> input; // user types in jumble of text, no previous instructions
		for (int i = 0; i < input.length(); i++)// iterate through string
		{
			hold = input[i];// read latest char
			if(hold == 'H') // compare
			{
				message = message + hold; //add letter to message
				goto next1; // jump to next copy and look for next letter
			}
		}
	}
	next1: // Wash, Rinse, Repeat
	while(true) // e
	{
		for (int i = 0; i < input.length(); i++)
		{
			hold = input[i];
			if(hold == 'e')
			{
				message = message + hold;
				goto next2;
			}
		}
		cin >> input;
	}
	next2:
	while(true) // l
	{
		for (int i = 0; i < input.length(); i++)
		{
			hold = input[i];
			if(hold == 'l')
			{
				message = message + hold;
				goto next3;
			}
		}
		cin >> input;
	}
	next3:
	while(true) // l
	{
		for (int i = 0; i < input.length(); i++)
		{
			hold = input[i];
			if(hold == 'l')
			{
				message = message + hold;
				goto next4;
			}
		}
		cin >> input;
	}
	next4:
	while(true) // o
	{
		for (int i = 0; i < input.length(); i++)
		{
			hold = input[i];
			if(hold == 'o')
			{
				message = message + hold;
				goto next5;
			}
		}
		cin >> input;
	}
	next5:
	message = message + ' ';
	while(true) // W
	{
		for (int i = 0; i < input.length(); i++)
		{
			hold = input[i];
			if(hold == 'W')
			{
				message = message + hold;
				goto next6;
			}
		}
		cin >> input;
	}
	next6:
	while(true) // o
	{
		for (int i = 0; i < input.length(); i++)
		{
			hold = input[i];
			if(hold == 'o')
			{
				message = message + hold;
				goto next7;
			}
		}
		cin >> input;
	}
	next7:
	while(true) // r
	{
		for (int i = 0; i < input.length(); i++)
		{
			hold = input[i];
			if(hold == 'r')
			{
				message = message + hold;
				goto next8;
			}
		}
		cin >> input;
	}
	next8:
	while(true) // l
	{
		for (int i = 0; i < input.length(); i++)
		{
			hold = input[i];
			if(hold == 'l')
			{
				message = message + hold;
				goto next9;
			}
		}
		cin >> input;
	}
	next9:
	while(true) // d
	{
		for (int i = 0; i < input.length(); i++)
		{
			hold = input[i];
			if(hold == 'd')
			{
				message = message + hold;
				goto next10;
			}
		}
		cin >> input;
	}
	next10:
	cout << message << endl;
	return 0;
}