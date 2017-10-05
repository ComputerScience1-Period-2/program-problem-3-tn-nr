/*
Noosrat Rahman and Tailea Nguyen - 10/5/17 2nd
Three_Digit_Ascend_Descend_Selection
Print out whether a number is ascending or descending
*/

#include <iostream>
#include <conio.h>
using namespace std; //*
void pause() {
	
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

void main() {
	int x, a, b, c;
	cout << " Give me a three digit number." << "\n";
	cin >> x;
	a = (x / 100);
	b = (x % 100) / 10;
	c = (x % 10);
	
	if (a > b && b > c) {
		cout << " Descending ";
	}
	else if(a < b && b < c) {
		cout << "Ascending";
	}

	else {
		cout << "Neither";
	}


		

	pause();
}



