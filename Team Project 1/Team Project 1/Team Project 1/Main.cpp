# include "Addition of Two Polynomials.h"

#include <iostream>

using namespace std;

int main() {

	int num;	// Used for the user to pick the option from the menu
	string polynomial_1;	// The first poylnomial 
	string polynomial_2;	// The second polynomial

	//Polynomial_Addition<int> poly_1;
	//Polynomial_Addition<int> poly_2;

	cout << "Addition of Two Polynomials" << endl;
	cout << "Type '1' to enter first polynomial" << endl;
	cout << "Type '2' to enter second polynomial" << endl;
	cout << "Type '3' to add polynomials" << endl;
	cout << "Type '4' to show result" << endl;
	cin >> num;

	if (num == 1) {
		cout << "Enter first polynomial: ";
		cin >> polynomial_1;
	}
	else if (num == 2) {
		cout << "Enter second polynomial: " << endl;
		cin >> polynomial_2;
	}
	else if (num == 3) {
		cout << "3" << endl;
	}
	else if (num == 4) {
		cout << "4" << endl;
	}
	else {
		cout << "Invalid number, try agian." << endl;
		cin >> num;
	}




	system("pause");
	return 0;
}