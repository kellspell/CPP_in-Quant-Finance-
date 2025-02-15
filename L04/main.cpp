 #include <iostream>

using namespace std;

double divisor(double numerator, double denominator){
	//This function divides two numbers
	return numerator/denominator;
}

long multiplier( long years, long months ) {
	// This function multiply to numbers
	return years * months;
}

int main()
{
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
    long monthsOfLoan = multiplier( yearsOfLoan, monthsInYear );

    // Lets  add a Print statement
    cout << principal << " " << interest << " " << yearsOfLoan << " " << monthInterest << " " << monthsOfLoan << endl;

    return 0;
}
