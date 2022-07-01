#include <iostream>
using namespace std;


int main() {
	char Grade;


	cout << " Enter your grade " << endl;
	cin >> Grade;

	switch (Grade) {
	case 'A':
	case 'a':
		cout << " You got more than 90 ";
		break;

	case 'B':
	case 'b':
		cout << " You got between 60 and 89 ";
		break;

	case 'C':
	case 'c':
		cout << " You got between 50 and 59 ";
		break;

	default:
		cout << " Enter alphabet characters ";



	}

	return 0;


}