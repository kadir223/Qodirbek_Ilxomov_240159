#include <iostream>
using namespace std;

// // Problem 1
// int main() {
//     int x;
//     cout << "please enter a number: ";
//     cin >> x;
//     if (x > 0) {
//         cout << "Number is positive";
//     } else if (x < 0) {
//         cout << "Number is negative";
//     } else {
//         cout << "Number is zero";
//     }
//     return 0;
// }
//
// // Problem 2
// int main() {
//     int x;
//     cout << "Please enter a number: ";
//     cin >> x;
//     if (x % 2 == 0) {
//         cout << "Number is even";
//     } else {
//         cout << "Number is odd";
//     }
//     return 0;
// }
//
// // Problem 3
// int main() {
//     int a, b;
//     cin >> a >> b;
//     if (a > b)
//         cout << "Largest number is " << a;
//     else
//         cout << "Largest number is " << b;
//     return 0;
// }
//
// // Problem 4
// int main() {
//     int x, y, z;
//     cin >> x >> y >> z;
//     if (x >= y && x >= z)
//         cout << "Largest number is " << x;
//     else if (y >= x && y >= z)
//         cout << "Largest number is " << y;
//     else
//         cout << "Largest number is " << z;
//     return 0;
// }
//
// // Problem 5
// int main() {
//     int year;
//     cin >> year;
//     if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//         cout << "Leap year";
//     else
//         cout << "Not a leap year";
//     return 0;
// }
//
// // Problem 6
// int main() {
//     int speed;
//     cin >> speed;
//     if (speed < 20)
//         cout << "too slow";
//     else if (speed > 80)
//         cout << "too fast";
//     else
//         cout << "just right";
//     return 0;
// }
//
// // Problem 7
// int main() {
//     int marks;
//     cin >> marks;
//     if (marks >= 50)
//         cout << "Pass";
//     else
//         cout << "Fail";
//     return 0;
// }
//
// // Problem 8
// int main() {
//     int num;
//     cin >> num;
//     if (num > 0)
//         cout << "Positive";
//     else if (num < 0)
//         cout << "Negative";
//     else
//         cout << "Zero";
//     return 0;
// }
//
// // Problem 9
// int main() {
//     char signal;
//     cin >> signal;
//     if (signal == 'g')
//         cout << "Go!";
//     else if (signal == 'y')
//         cout << "Get ready!";
//     else if (signal == 'r')
//         cout << "Stop";
//     return 0;
// }
//
// // Problem 10
// int main() {
//     int grade;
//     cin >> grade;
//     if (grade >= 90)
//         cout << "A";
//     else if (grade >= 80)
//         cout << "B";
//     else if (grade >= 70)
//         cout << "C";
//     else if (grade >= 60)
//         cout << "D";
//     else
//         cout << "F";
//     return 0;
// }
//
// // Problem 11
// int main() {
//     int n1, n2;
//     cin >> n1 >> n2;
//     if (n2 != 0 && n1 % n2 == 0)
//         cout << n1 << " is divisible by " << n2;
//     else
//         cout << n1 << " is not divisible by " << n2;
//     return 0;
// }
//
// // Problem 12
// int main() {
//     int a1, a2, a3;
//     cin >> a1 >> a2 >> a3;
//     if (a1 + a2 + a3 == 180)
//         cout << "The triangle is valid";
//     else
//         cout << "The triangle is not valid";
//     return 0;
// }
//
// // Problem 13
// int main() {
//     char ch;
//     cin >> ch;
//     if (ch >= 'a' && ch <= 'z')
//         cout << "Lowercase alphabet";
//     else if (ch >= 'A' && ch <= 'Z')
//         cout << "Uppercase alphabet";
//     else
//         cout << "It is not an alphabet";
//     return 0;
// }
//
// // Problem 14
// int main() {
//     double w1, p1, w2, p2;
//     cin >> w1 >> p1 >> w2 >> p2;
//     double c1 = p1 / w1, c2 = p2 / w2;
//     if (c1 < c2)
//         cout << "Package 1 has a better price";
//     else if (c1 > c2)
//         cout << "Package 2 has a better price";
//     else
//         cout << "Two packages have the same price.";
//     return 0;
// }
//
// // Problem 15
// int main() {
//     int num;
//     cin >> num;
//     int d1 = num / 100, d3 = num % 10;
//     if (d1 == d3)
//         cout << num << " is a palindrome";
//     else
//         cout << num << " is not a palindrome";
//     return 0;
// }
//
// // Problem 16
// int main() {
//     double x, y;
//     cin >> x >> y;
//     double distSquared = x * x + y * y;
//     if (distSquared <= 100.0)
//         cout << "Point (" << x << "," << y << ") is in circle";
//     else
//         cout << "Point (" << x << "," << y << ") is not in circle";
//     return 0;
// }
//
// // Problem 17
// int main() {
//     double gpa;
//     cin >> gpa;
//     if (gpa >= 4.0)
//         cout << "You got 80% scholarship";
//     else if (gpa >= 3.5)
//         cout << "You got 60% scholarship";
//     else if (gpa >= 3.0)
//         cout << "You got 50% scholarship";
//     else
//         cout << "No scholarship";
//     return 0;
// }
//
// // Problem 18
// int main() {
//     int number;
//     cin >> number;
//     if (number % 3 == 0 || number % 5 == 0)
//         cout << number << " is a multiple of 3 or 5";
//     else
//         cout << number << " is not a multiple of 3 or 5";
//     return 0;
// }
//
// // Problem 19
// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     if (a == b && b == c)
//         cout << "Equilateral triangle";
//     else if (a == b || b == c || a == c)
//         cout << "Isosceles triangle";
//     else
//         cout << "Scalene triangle";
//     return 0;
// }
