#include <iostream>
using namespace std;

// // Problem 1a
// int main() {
//     int sum = 0;
//     for (int i = 1; i <= 100; i++) {
//         sum += i;
//     }
//     cout << "Sum of first 100 natural numbers: " << sum;
//     return 0;
// }
//
// // Problem 1b
// int main() {
//     int n, sum = 0;
//     cout << "Enter a positive integer: ";
//     cin >> n;
//     int i = 1;
//     while (i <= n) {
//         sum += i;
//         i++;
//     }
//     cout << "Sum of first " << n << " natural numbers: " << sum;
//     return 0;
// }
//
// // Problem 2a
// int main() {
//     int count = 0, num = 2;
//     while (count < 10) {
//         bool isPrime = true;
//         for (int i = 2; i <= num / 2; i++) {
//             if (num % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//         if (isPrime) {
//             cout << num << " ";
//             count++;
//         }
//         num++;
//     }
//     return 0;
// }
//
// // Problem 2b
// int main() {
//     int n, count = 0, num = 2;
//     cout << "Enter a number: ";
//     cin >> n;
//     while (count < n) {
//         bool isPrime = true;
//         for (int i = 2; i <= num / 2; i++) {
//             if (num % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//         if (isPrime) {
//             cout << num << " ";
//             count++;
//         }
//         num++;
//     }
//     return 0;
// }
//
// // Problem 3
// int main() {
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;
//     while (n != 1) {
//         cout << n << ", ";
//         if (n % 2 == 0)
//             n /= 2;
//         else
//             n = 3 * n + 1;
//     }
//     cout << 1;
//     return 0;
// }
//
// // Problem 4
// int main() {
//     int num, count = 0;
//     cout << "Enter a number: ";
//     cin >> num;
//     while (num != 0) {
//         num /= 10;
//         count++;
//     }
//     cout << "Number of digits: " << count;
//     return 0;
// }
//
// // Problem 5
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     while (num != 0) {
//         cout << num % 10 << " ";
//         num /= 10;
//     }
//     return 0;
// }
//
// // Problem 6
// int main() {
//     int a, b;
//     cout << "Enter two positive integers: ";
//     cin >> a >> b;
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     cout << "GCD: " << a;
//     return 0;
// }
//
// // Problem 7
// int main() {
//     int num, sum = 0, count = 0;
//     while (sum <= 100) {
//         cout << "Enter a number: ";
//         cin >> num;
//         sum += num;
//         count++;
//     }
//     cout << "Sum exceeded 100! Total sum: " << sum << endl;
//     cout << "Total numbers entered: " << count;
//     return 0;
// }
//
// // Problem 8
// int main() {
//     int balance = 500, amount;
//     while (balance > 0) {
//         cout << "Your balance: $" << balance << endl;
//         cout << "Enter withdrawal amount (or 0 to cancel): ";
//         cin >> amount;
//         if (amount == 0) break;
//         if (amount <= balance) {
//             balance -= amount;
//             cout << "Remaining balance: $" << balance << endl;
//         } else {
//             cout << "Insufficient funds!" << endl;
//         }
//     }
//     return 0;
// }
//
// // Problem 9
// int main() {
//     char response;
//     do {
//         cout << "Enter Y or N: ";
//         cin >> response;
//         if (response != 'Y' && response != 'N') {
//             cout << "Invalid" << endl;
//         }
//     } while (response != 'Y' && response != 'N');
//     cout << "Accepted";
//     return 0;
// }
//
// // Problem 10
// int main() {
//     int choice;
//     do {
//         cout << "ATM Menu:\n1: Withdraw\n2: Check balance\n3: Deposit\n4: Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;
//         if (choice == 1) cout << "Processing...\n";
//         else if (choice == 2) cout << "Checking balance...\n";
//         else if (choice == 3) cout << "Depositing...\n";
//     } while (choice != 4);
//     cout << "Goodbye!";
//     return 0;
// }
//
// // Problem 11
// int main() {
//     int choice;
//     do {
//         cout << "Menu:\n1: Add\n2: Subtract\n3: Multiply\n4: Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;
//         if (choice == 1) cout << "Performing addition...\n";
//         else if (choice == 2) cout << "Performing subtraction...\n";
//         else if (choice == 3) cout << "Performing multiplication...\n";
//     } while (choice != 4);
//     cout << "Goodbye!";
//     return 0;
// }
//
// // Problem 12
// int main() {
//     string password;
//     int attempts = 0;
//     do {
//         cout << "Enter password: ";
//         cin >> password;
//         if (password != "1234") {
//             cout << "Incorrect\n";
//             attempts++;
//         } else {
//             cout << "Access Granted\n";
//             break;
//         }
//     } while (attempts < 3);
//     return 0;
// }
//
// // Problem 13
// int main() {
//     int target = 7, guess;
//     do {
//         cout << "Guess: ";
//         cin >> guess;
//         if (guess < target) cout << "Too low\n";
//         else if (guess > target) cout << "Too high\n";
//         else cout << "Correct!\n";
//     } while (guess != target);
//     return 0;
// }
//
// // Problem 14
// void welcomeMessage() {
//     cout << "Welcome to the C++ programming world!" << endl;
// }
//
// int main() {
//     welcomeMessage();
//     return 0;
// }
//
// // Problem 15
// void greetUser() {
//     string name;
//     cout << "Enter your name: ";
//     cin >> name;
//     cout << "Hello, " << name << "!" << endl;
// }
//
// int main() {
//     greetUser();
//     return 0;
// }
//
// // Problem 16
// int maxNumber(int a, int b) {
//     return (a > b) ? a : b;
// }
//
// int main() {
//     int a = 5, b = 9;
//     cout << "Larger number: " << maxNumber(a, b) << endl;
//     return 0;
// }
//
// // Problem 17
// int factorial(int n) {
//     int fact = 1;
//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     return fact;
// }
//
// int main() {
//     int n = 5;
//     cout << "Factorial of " << n << ": " << factorial(n) << endl;
//     return 0;
// }
//
// // Problem 18
// void printRectangle(int width, int height) {
//     for (int i = 0; i < height; i++) {
//         for (int j = 0; j < width; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
//
// int main() {
//     printRectangle(3, 2);
//     return 0;
// }
