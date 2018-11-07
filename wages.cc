/*
 * Author: Yo Seop Kim
 * Date: November 7th 2018
 * Description: Calculate the wages
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
//function prototypes

int main() {

    //0. variable declaration
    double hours = 0, rate, wages;

    //1. input the hours
    cout << "Enter the number of hours: ";
    cin >> hours;
    if (hours < 0 || hours > 60) {
        cout << "Invalid # of hours" << endl;
        exit(0);
    }
    //2. input the rate
    cout << "Enter the rate: ";
    cin >> rate;
    if (rate < 9 || rate > 10) {
        cout << "Invalid rate" << endl;
        exit(0);
    }
    //3. Calculate wages
    if (hours > 40) {//calculate with overtime
        wages = (hours - 40) * 1.5 * rate + 40 * rate;
    }
    else {//calculate without overtime
        wages = hours * rate;
    }
    //4. Print the results (wages)
    cout << "Hours: " << hours << endl;
    cout << "Rate:  " << rate << endl;
    cout << "Wages: $" << wages << endl;
    return 0;
}
