#include <iostream>
using namespace std;
//
// int main() {
//
// //Problem 1
//     int n, sum = 0;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//         sum += arr[i];
//     }
//     cout << "sum=" << sum << endl;
//
// //Problem 2
//     double average(int arr[], int size) {
//         int sum = 0;
//         for (int i = 0; i < size; i++) {
//             sum += arr[i];
//         }
//         return (double)sum / size;
//     }
//     cin >> n;
//     int arr2[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr2[i];
//     }
//     cout << average(arr2, n) << endl;
//
// //Problem 3
//     int findMin(int arr[], int size) {
//         int min = arr[0];
//         for (int i = 1; i < size; i++) {
//             if (arr[i] < min) {
//                 min = arr[i];
//             }
//         }
//         return min;
//     }
//     cin >> n;
//     int arr3[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr3[i];
//     }
//     cout << "Min=" << findMin(arr3, n) << endl;
//
// //Problem 4
//     int indexOfLargestElement(double arr[], int size) {
//         if (size <= 0) return -1;
//         int maxIndex = 0;
//         for (int i = 1; i < size; i++) {
//             if (arr[i] > arr[maxIndex]) {
//                 maxIndex = i;
//             }
//         }
//         return maxIndex;
//     }
//     cin >> n;
//     double arr4[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr4[i];
//     }
//     cout << indexOfLargestElement(arr4, n) << endl;
//
// //Problem 5
//     bool strictlyEqual(const int list1[], const int list2[], int size) {
//         for (int i = 0; i < size; i++) {
//             if (list1[i] != list2[i]) {
//                 return false;
//             }
//         }
//         return true;
//     }
//     cin >> n;
//     int list1[n], list2[n];
//     for (int i = 0; i < n; i++) {
//         cin >> list1[i];
//     }
//     for (int i = 0; i < n; i++) {
//         cin >> list2[i];
//     }
//     if (strictlyEqual(list1, list2, n)) {
//         cout << "Two lists are strictly identical" << endl;
//     } else {
//         cout << "Two lists are not strictly identical" << endl;
//     }
//
// //Problem 6
//     int frequency[26] = {0};
//     char ch;
//     while (true) {
//         cin >> ch;
//         if (ch == '0') break;
//         if (ch >= 'a' && ch <= 'z') {
//             frequency[ch - 'a']++;
//         }
//     }
//     for (int i = 0; i < 26; i++) {
//         if (frequency[i] > 0) {
//             cout << char('a' + i) << ": " << frequency[i] << endl;
//         }
//     }
//
// //Problem 7
//     cin >> n;
//     int arr5[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr5[i];
//     }
//     sort(arr5, arr5 + n);
//     for (int i = 0; i < n; i++) {
//         cout << arr5[i] << " ";
//     }
//     cout << endl;
//
// //Problem 8
//     int roll[6] = {0};
//     for (int i = 0; i < 10000; i++) {
//         int die = rand() % 6;
//         roll[die]++;
//     }
//     for (int i = 0; i < 6; i++) {
//         cout << "Value " << i + 1 << ": " << roll[i] << endl;
//     }
//
// //Problem 9
//     void reverseArray(int arr[], int start, int end) {
//         while (start < end) {
//             swap(arr[start], arr[end]);
//             start++;
//             end--;
//         }
//     }
//     cin >> n;
//     int arr6[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr6[i];
//     }
//     reverseArray(arr6, 0, n - 1);
//     for (int i = 0; i < n; i++) {
//         cout << arr6[i] << " ";
//     }
//     cout << endl;
//
// //Problem 10
//     bool isSorted(int arr[], int n) {
//         for (int i = 1; i < n; i++) {
//             if (arr[i] < arr[i - 1]) {
//                 return false;
//             }
//         }
//         return true;
//     }
//     cin >> n;
//     int arr7[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr7[i];
//     }
//     if (isSorted(arr7, n)) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
//
//     return 0;
// }
