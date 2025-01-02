#include "operators.h"

void printAverages() {
    double a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    double average = (a + b + c + d + e) / 5;
    double sums = (a + b + c) / (d + e);

    double average1 = (a + b + c) / 3;
    double average2 = (d + e) / 2;

    double average3 = average1 / average2;

    cout << average << endl;
    cout << sums << endl;
    cout << average3 << endl;
}

void printFractionalpart() {
    double a, b;
    cin >> a >> b;
    double average = a / b;
    cout << average - ((int) average) << endl;
}

void moduloComputation() {
    int a, b;
    cin >> a >> b;
    // while (a > b)
    // {
    //     a -= b;
    // }
    cout << a - ((a / b) * b)<< endl;
}

void isEven() {
    int a;
    cin >> a;
    bool isEven1 = a % 2 == 0;
    bool isEven2 = a - ((a / 2) * 2) == 0;
    bool isEven3 = a % 10 == 0 || a % 10 == 2 || a % 10 == 4 || a % 10 == 6 || a % 10 == 8;
    cout << isEven1 << endl << isEven2 << endl << isEven3 << endl;
}

void lastThreeDigitsSum() {
    int a;
    cin >> a;
    int firstDigit = a % 10;
    a /= 10;
    int secondDigit = a % 10;
    a /= 10;
    int thirdDigit = a % 10;
    int sum = firstDigit + secondDigit + thirdDigit;
    cout << sum << endl;
}


void fourthFromEnd() {
    int a;
    cin >> a;
    // int firstDigit = a % 10;
    // a /= 10;
    // int secondDigit = a % 10;
    // a /= 10;
    // int thirdDigit = a % 10;
    // a /= 10;
    // int fourthDigit = a % 10;
    int fourthDigit = (a / 1000) % 10;
    cout << fourthDigit << endl;
}


void oddOrEven() {
    int a;
    cin >> a;
    int number_even = a % 2 == 0;
    int number_odd = 1 - number_even;
    int number = number_odd * (7) + number_even * (100);
    cout << number << endl;
}

void yearsCount() {
    int days, years, months;
    cin >> days;
    years = days / 360;
    days %= 360;
    months = days / 30;
    days %= 30;
    cout << years << " " << months << " " << days << "\n";
}
