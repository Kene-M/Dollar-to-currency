// Program that converts dollars into yen,
// pesos and euros in a tabular form.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare the variables used for this program.
    const double PESOS_PER_DOLLAR = 19.73 ;
    const double EUROS_PER_DOLLAR = 0.84 ;
    const double YEN_PER_DOLLAR = 113.27 ;
    double dollars , amount_in_pesos , amount_in_euros , amount_in_yen ;

    // Get the amount of money to be converted from the user.
    cout << "Enter the amount in dollars " ;
    cin >> dollars ; cout << endl << endl ;

    // Calculate the amount of the input in other currencies.
    amount_in_pesos = PESOS_PER_DOLLAR * dollars ;
    amount_in_euros = EUROS_PER_DOLLAR * dollars ;
    amount_in_yen = YEN_PER_DOLLAR * dollars ;

    // Display the tabulated results to the user.

    // Row 1:
    cout << setprecision(2) << fixed << showpoint ;
    cout << setw(15) << "Dollars" ;
    cout << setw(15)<< "Yen" ;
    cout << setw(15)<< "Euros" ;
    cout << setw(15) << "Pesos" << endl ;

    // Row 2:
    cout << setw(15) << dollars ;
    cout << setw(15) << amount_in_yen ;
    cout << setw(15) << amount_in_euros ;
    cout << setw(15) << amount_in_pesos ;

    return 0;
}
