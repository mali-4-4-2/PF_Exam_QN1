#include <iostream>
using namespace std;

bool is_leap_year(unsigned int Y) {
    if (Y % 400 == 0) {
        return true; // when the value is Divisible by 400
    } else if (Y % 100 == 0) {
        return false; // when the year Divisible by Century i.e 100 but mot divisible by 400
    } else if (Y % 4 == 0) {
        return true; // if the year is Divisible by 4 , but not divisible by century i.e 100
    } else {
        return false; // if its not  divisible by 4
    }
}

int main() {
    unsigned int year;
    char option; 

    do {
        cout << "Enter a year: ";
        cin >> year;

        if (is_leap_year(year)) {
            cout << year << " is a leap year." << endl;
        } else {
            cout << year << " is not a leap year." << endl;
        }

        cout << "Would you like to check another year? (y/n): ";
        cin >> option;
        
    } while (option == 'y' || option == 'Y'); // Prompts the user to choose if they want continue or exit by enter either Y or y.(DO While loop).

    return 0;
}
