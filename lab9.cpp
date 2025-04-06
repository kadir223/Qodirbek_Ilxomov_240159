#include <iostream>
using namespace std;
//
// // Problem 1
// int multiply(int a, int b) {
//     if (b == 0) return 0;
//     if (b < 0) return -a + multiply(a, b + 1);
//     return a + multiply(a, b - 1);
// }
//
// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     cout << "Product: " << multiply(a, b) << endl;
//     return 0;
// }
//
// // Problem 2
// int factorial(int n) {
//     if (n == 0) return 1;
//     return n * factorial(n - 1);
// }
//
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Factorial: " << factorial(n) << endl;
//     return 0;
// }
//
// // Problem 3
// int fibonacci(int n) {
//     if (n <= 1) return n;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
//
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Fibonacci: " << fibonacci(n) << endl;
//     return 0;
// }
//
// // Problem 4
// int sumOfNumbers(int n) {
//     if (n == 0) return 0;
//     return n + sumOfNumbers(n - 1);
// }
//
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Sum of numbers: " << sumOfNumbers(n) << endl;
//     return 0;
// }
//
// // Problem 5
// void printDescending(int n) {
//     if (n == 0) return;
//     cout << n << " ";
//     printDescending(n - 1);
// }
//
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     printDescending(n);
//     cout << endl;
//     return 0;
// }
//
// // Problem 6
// int countDigits(int n) {
//     if (n == 0) return 0;
//     return 1 + countDigits(n / 10);
// }
//
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Number of digits: " << countDigits(n) << endl;
//     return 0;
// }
//
// // Problem 7
// int sumOfDigits(int n) {
//     if (n == 0) return 0;
//     return n % 10 + sumOfDigits(n / 10);
// }
//
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Sum of digits: " << sumOfDigits(n) << endl;
//     return 0;
// }
//
// // Problem 8
// int power(int x, int y) {
//     if (y == 0) return 1;
//     return x * power(x, y - 1);
// }
//
// int main() {
//     int x, y;
//     cout << "Enter base and exponent: ";
//     cin >> x >> y;
//     cout << "Power: " << power(x, y) << endl;
//     return 0;
// }
//
// // Problem 9
// int reverseNumber(int n, int rev = 0) {
//     if (n == 0) return rev;
//     return reverseNumber(n / 10, rev * 10 + n % 10);
// }
//
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Reversed number: " << reverseNumber(n) << endl;
//     return 0;
// }
//
// // Problem 10
// bool isPalindrome(int n, int rev = 0, int original = -1) {
//     if (original == -1) original = n;
//     if (n == 0) return rev == original;
//     return isPalindrome(n / 10, rev * 10 + n % 10, original);
// }
//
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << (isPalindrome(n) ? "Palindrome" : "Not Palindrome") << endl;
//     return 0;
// }
//
// // Problem 11
// bool isPrime(int n, int div = 2) {
//     if (n <= 2) return n == 2;
//     if (n % div == 0) return false;
//     if (div * div > n) return true;
//     return isPrime(n, div + 1);
// }
//
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << (isPrime(n) ? "Prime" : "Not Prime") << endl;
//     return 0;
// }
//
// // Problem 12 (Bonus)
// void towerOfHanoi(int n, char from, char to, char aux) {
//     if (n == 1) {
//         cout << "Move disk 1 from " << from << " to " << to << endl;
//         return;
//     }
//     towerOfHanoi(n - 1, from, aux, to);
//     cout << "Move disk " << n << " from " << from << " to " << to << endl;
//     towerOfHanoi(n - 1, aux, to, from);
// }
//
// int main() {
//     int n;
//     cout << "Enter number of disks: ";
//     cin >> n;
//     towerOfHanoi(n, 'A', 'C', 'B');
//     return 0;
// }
