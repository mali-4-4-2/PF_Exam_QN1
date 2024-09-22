#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    int numerator = 1;
    int denominator = 3;
    double sum = 0.0; //caters for the decimal points or floating.

    // Loop until the numerator moves past 95
    while (numerator <= 95) {
        sum += static_cast<double>(numerator) / denominator; 
        
        numerator += 2; // Move to the next odd numerator by 2
        
        denominator += 2; // Move to the next odd denominator by 2
    }

    // Set the precision for output
    cout << fixed << setprecision(6); 
    cout << "The sum of the series is: " << sum << endl;

    return 0;
}
