#include <iostream>
using namespace std;

int main() {
	char ContProgram = 'y';
	
	for (int i = 99; i >= 0; i = i - 1) 
	{
		if (i == 1) {
			cout << i << " bottle of beer on the wall" << endl;
		}
		else if (i == 0) {
			cout << "No more bottles of beer on the wall" << endl;
		}
		else {
			cout << i << " bottles of beer on the wall" << endl;
		}
	}

	do
	{
		cout << "Do you want to continue (y/n)" << endl;

		cin >> ContProgram;

		switch (ContProgram) 
		{
		case 'y':
			cout << "Going to continue" << endl;
			break;

		case 'n':
			cout << "Going to exit";
			break;

		default:
			ContProgram = 'y';
			break;
		}
	} while (ContProgram == 'y');

	return 0;

}
