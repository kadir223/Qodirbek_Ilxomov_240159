#include <iostream>
using namespace std;
//
// //Problem 1
// double calculateBill(int itemChoice, int quantity) {
//     double price = 0;
//     if (itemChoice == 1) price = 10;  // Pizza
//     else if (itemChoice == 2) price = 8;  // Burger
//     else if (itemChoice == 3) price = 5;  // Salad
//     return price * quantity;
// }
//
// int main() {
//     int itemChoice, quantity;
//     double totalBill = 0;
//     char choice;
//
//     do {
//         cout << "Menu:\n1. Pizza: $10\n2. Burger: $8\n3. Salad: $5\n";
//         cout << "Enter item choice (1/2/3): ";
//         cin >> itemChoice;
//         cout << "Enter quantity: ";
//         cin >> quantity;
//         totalBill += calculateBill(itemChoice, quantity);
//         cout << "Total Bill: $" << totalBill << endl;
//         cout << "Do you want to order more? (Y/N): ";
//         cin >> choice;
//     } while (choice == 'Y' || choice == 'y');
//
//     cout << "Final Bill: $" << totalBill << endl;
//     return 0;
// }
//
// //Problem 2
// double calculateParkingFee(int hours) {
//     if (hours <= 2) return 0;
//     else if (hours <= 5) return (hours - 2) * 2;
//     else return 6 + (hours - 5) * 5;
// }
//
// int main() {
//     int hours;
//     cout << "Enter number of hours parked: ";
//     cin >> hours;
//     double fee = calculateParkingFee(hours);
//     cout << "Fee: $" << fee << endl;
//     return 0;
// }
//
// //Problem 3
// void deposit(double &balance, double amount) {
//     balance += amount;
// }
//
// void withdraw(double &balance, double amount) {
//     if (amount > balance) {
//         cout << "Insufficient Funds\n";
//     } else {
//         balance -= amount;
//     }
// }
//
// void checkBalance(double balance) {
//     cout << "Balance: $" << balance << endl;
// }
//
// int main() {
//     double balance = 500;
//     int choice;
//     double amount;
//
//     do {
//         cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
//         cout << "Choose an option: ";
//         cin >> choice;
//
//         switch (choice) {
//             case 1:
//                 cout << "Enter deposit amount: ";
//                 cin >> amount;
//                 deposit(balance, amount);
//                 break;
//             case 2:
//                 cout << "Enter withdrawal amount: ";
//                 cin >> amount;
//                 withdraw(balance, amount);
//                 break;
//             case 3:
//                 checkBalance(balance);
//                 break;
//             case 4:
//                 cout << "Goodbye!" << endl;
//                 break;
//             default:
//                 cout << "Invalid option\n";
//         }
//     } while (choice != 4);
//
//     return 0;
// }
//
// //Problem 4
// double calculateTotalCost(int movieChoice, int tickets) {
//     double price = 0;
//     if (movieChoice == 1) price = 8;  // Movie A
//     else if (movieChoice == 2) price = 10;  // Movie B
//     else if (movieChoice == 3) price = 12;  // Movie C
//     return price * tickets;
// }
//
// int main() {
//     int movieChoice, tickets;
//     double totalCost = 0;
//     char choice;
//
//     do {
//         cout << "Menu:\n1. Movie A: $8\n2. Movie B: $10\n3. Movie C: $12\n";
//         cout << "Enter movie choice (1/2/3): ";
//         cin >> movieChoice;
//         cout << "Enter number of tickets: ";
//         cin >> tickets;
//         totalCost = calculateTotalCost(movieChoice, tickets);
//         cout << "Total Cost: $" << totalCost << endl;
//         cout << "Do you want to book more tickets? (Y/N): ";
//         cin >> choice;
//     } while (choice == 'Y' || choice == 'y');
//
//     return 0;
// }
//
// //Problem 5
// double calculateFare(int trainChoice, int tickets) {
//     double price = 0;
//     if (trainChoice == 1) price = 15;  // Train X
//     else if (trainChoice == 2) price = 20;  // Train Y
//     else if (trainChoice == 3) price = 25;  // Train Z
//     return price * tickets;
// }
//
// int main() {
//     int trainChoice, tickets;
//     double totalFare = 0;
//     char choice;
//
//     do {
//         cout << "Train Options:\n1. Train X: $15\n2. Train Y: $20\n3. Train Z: $25\n";
//         cout << "Enter train choice (1/2/3): ";
//         cin >> trainChoice;
//         cout << "Enter number of tickets: ";
//         cin >> tickets;
//         totalFare = calculateFare(trainChoice, tickets);
//         cout << "Total Fare: $" << totalFare << endl;
//         cout << "Do you want to book more tickets? (Y/N): ";
//         cin >> choice;
//     } while (choice == 'Y' || choice == 'y');
//
//     return 0;
// }
//
// //Problem 6
// bool isStrongPassword(string password) {
//     bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
//
//     for (int i = 0; i < password.length(); i++) {
//         if (isupper(password[i])) hasUpper = true;
//         else if (islower(password[i])) hasLower = true;
//         else if (isdigit(password[i])) hasDigit = true;
//         else if (ispunct(password[i])) hasSpecial = true;
//     }
//
//     return hasUpper && hasLower && hasDigit && hasSpecial && password.length() >= 8;
// }
//
// int main() {
//     string password;
//     cout << "Enter password: ";
//     cin >> password;
//
//     if (isStrongPassword(password)) {
//         cout << "Strong Password\n";
//     } else {
//         cout << "Weak Password\n";
//     }
//
//     return 0;
// }
//
// //Problem 7
// bool isValidDate(int day, int month, int year) {
//     if (month < 1 || month > 12) return false;
//     if (day < 1) return false;
//
//     int daysInMonth;
//     if (month == 2) {
//         bool leapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
//         daysInMonth = leapYear ? 29 : 28;
//     } else if (month == 4 || month == 6 || month == 9 || month == 11) {
//         daysInMonth = 30;
//     } else {
//         daysInMonth = 31;
//     }
//
//     return day <= daysInMonth;
// }
//
// void nextDate(int &day, int &month, int &year) {
//     day++;
//
//     if (month == 2) {
//         bool leapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
//         if ((leapYear && day > 29) || (!leapYear && day > 28)) {
//             day = 1;
//             month++;
//         }
//     } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
//         day = 1;
//         month++;
//     } else if (month != 2 && day > 31) {
//         day = 1;
//         month++;
//     }
//
//     if (month > 12) {
//         month = 1;
//         year++;
//     }
// }
//
// int main() {
//     int day, month, year;
//     cout << "Enter date (day month year): ";
//     cin >> day >> month >> year;
//
//     if (!isValidDate(day, month, year)) {
//         cout << "Invalid date!\n";
//     } else {
//         nextDate(day, month, year);
//         cout << "Next Date: " << day << "/" << month << "/" << year << endl;
//     }
//
//     return 0;
// }
