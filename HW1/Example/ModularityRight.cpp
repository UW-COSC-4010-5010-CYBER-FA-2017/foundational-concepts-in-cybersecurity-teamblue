#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

void geo() // find the geometric sum
{
	// hard coded for ease of example
	long sum = 1 * ((1-pow(2.0,25.0))/(1-2));
	cout << "The geometric sum is: " << sum << endl << endl;
}

void prime() // Search for primes
{
	// There are is 1, nums is the sequence 2^n
	cout << "2." << endl << endl;
}

int main()
{
	int nums [25] = {1, 2, 4, 8, 16, 32, 64, 128,  256, 512, 1024, 2048, 4096,
	 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152,
	 4194304, 8388608, 16777216};
	string com;
	cout << nums;
	while(true) // Loop until the user mistypes something
	{
		cout << "What do you want to do? Find:" << endl//ask the user what to do
		<< "Geometric Sum [geo] or Primes [prime]" << endl;
		cin >> com;
		// make lower case for ease of matching
		transform(com.begin(), com.end(), com.begin(), ::tolower);
		if (com == "geo")
		{
			geo(); // call geo function
		}
		else if (com == "prime")
		{
			prime(); //call prime function
		}
		else
		{
			return 0; // exit
		}

	}
}