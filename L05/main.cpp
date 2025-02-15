#include <iostream>
#include <cmath> // imported math library
#include <iomanip> // display precison
#include "divisor.h"
#include "multiplier.h"



using namespace std;


int main(){

	const int monthsInYear = 12;
    const int Percent = 100;

    // Getting the user input
    double principal = 0.0;
    cout << "Enter the amount you want to borrow: ";
    cin >> principal;

    double humanInterest = 0.00;
    cout << "Enter the interest amount: ";
    cin >> humanInterest;

    // Dividing the interest by 100
    double interest = divisor( humanInterest, Percent);

    int yearsOfLoan = 0;
    cout << "Enter the Years of Loan: ";
    cin >> yearsOfLoan;

    double monthInterest = divisor( interest, monthsInYear );
    double monthsOfLoan = multiplier( yearsOfLoan, monthsInYear );

    // Lets  add a Print statement
   // cout << principal << " " << interest << " " << yearsOfLoan << " " << monthInterest << " " << monthsOfLoan << endl;
	
	// lets create a payment plan for it 
	double payment = 0.0;
	payment = principal * (monthInterest / (1 - (pow((double)1 + monthInterest, - monthsOfLoan))));
	
	// Here I've added set-precision to preperly display the amount  also setios to make  the number better 
	cout << "Monthfuly Payment is: " << setiosflags(ios::fixed) << setprecision(2) << payment << endl; 	

    return 0;



}
