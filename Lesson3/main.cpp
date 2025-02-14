#include <iostream>

// In this lesson we are learing about how do not hardedcode numbers as a in the previews lessons


using namespace std;

int main(){
        const int monthsInYear = 12;

        double principal = 0.0;
	cout << "Enter the principal amount: ";
	cin >> principal;

        double interest = 0.00;
	cout << "Enter the interest amount: ";
        cin >> interest;

        int yearsOfLoan = 0;
	cout << "Enter the Years of Loan: ";
        cin >> yearsOfLoan;

        double monthInterest = interest/monthsInYear;
        long monthsOfLoan = yearsOfLoan * monthsInYear;

        // Lets  add a Print statement
        cout << principal << " " << interest << " " << yearsOfLoan <<
                " " << monthInterest << " " << monthsOfLoan << endl;

        return 0;
}

