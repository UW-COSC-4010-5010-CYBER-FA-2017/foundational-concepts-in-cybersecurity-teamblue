#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int nums [25] = {1, 2, 4, 8, 16, 32, 64, 128,  256, 512, 1024, 2048, 4096,
	 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152,
	 4194304, 8388608, 16777216};
	long sum;
	int r = 25;
	string com;
	cout << nums;
	while(true)
	{
		cycle:
		cout << "What do you want to do? Find:" << endl
		<< "Geometric Sum [geo] or Primes [prime]" << endl;
		cin >> com;
		// make lower case
		transform(com.begin(), com.end(), com.begin(), ::tolower);
		if (com == "geo") // compare input
		{
			goto geo; // jump like a tool
		}
		else if (com == "prime")
		{
			goto prime;
		}
		else // if input doesn't match
		{
			return 0; // exit
		}

	}

	geo:
	sum = nums[1] * ((1-pow(2.0,25.0))/(1-2)); // calculate geometric sum
	cout << "The geometric sum is: " << sum << endl << endl; // print out
	goto cycle;
	prime:
	cout << "2" << endl << endl; // print only prime in 2^n series
	goto cycle;
}