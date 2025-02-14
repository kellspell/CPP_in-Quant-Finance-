#include <iostream>


using namespace std;

int main(){
	const int monthsInYear = 12;

	double principal = 10000.0;
	double interest = 0.05;
	int yearsOfLoan = 30;
	
	double monthInterest = interest/monthsInYear;
	long monthsOfLoan = yearsOfLoan * monthsInYear;

	// Lets  add a Print statement
	cout << principal << " " << interest << " " << yearsOfLoan <<
		" " << monthInterest << " " << monthsOfLoan << endl;

	return 0;
}
