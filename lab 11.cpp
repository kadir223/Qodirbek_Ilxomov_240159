
#include <iostream>
using namespace std;
// //Problem 1
// int main() {
//     int N, M;
//     cin >> N >> M;
//     int matrix[N][M];
//     int sum = 0;
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cin >> matrix[i][j];
//             sum += matrix[i][j];
//         }
//     }
//     cout << sum << endl;
//     return 0;
// }
//
// //Problem 2
//
// int main() {
//     int N, M;
//     cin >> N >> M;
//     int matrix[N][M];
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cin >> matrix[i][j];
//         }
//     }
//     for (int i = 0; i < N; i++) {
//         int maxVal = matrix[i][0];
//         for (int j = 1; j < M; j++) {
//             if (matrix[i][j] > maxVal) {
//                 maxVal = matrix[i][j];
//             }
//         }
//         cout << maxVal << " ";
//     }
//     cout << endl;
//     return 0;
// }
//
// //Problem 3
//
//
// int main() {
//     int N, M;
//     cin >> N >> M;
//     int matrix[N][M];
//     int columnSum[M] = {0};
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cin >> matrix[i][j];
//             columnSum[j] += matrix[i][j];
//         }
//     }
//     for (int j = 0; j < M; j++) {
//         cout << columnSum[j] << " ";
//     }
//     cout << endl;
//     return 0;
// }
//
// //Problem 4
// int main() {
//     int N;
//     cin >> N;
//     int matrix[N][N];
//     int diagonalSum = 0;
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             cin >> matrix[i][j];
//             if (i == j) {
//                 diagonalSum += matrix[i][j];
//             }
//         }
//     }
//     cout << diagonalSum << endl;
//     return 0;
// }
//
// //Problem 5
//
// int main() {
//     int N, M;
//     cin >> N >> M;
//     int matrix[N][M];
//     int transpose[M][N];
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cin >> matrix[i][j];
//             transpose[j][i] = matrix[i][j];
//         }
//     }
//     for (int i = 0; i < M; i++) {
//         for (int j = 0; j < N; j++) {
//             cout << transpose[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//
// //Problem 6
// int main() {
//     int N, M;
//     cin >> N >> M;
//     int matrixA[N][M], matrixB[M][N], result[N][N] = {0};
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cin >> matrixA[i][j];
//         }
//     }
//     for (int i = 0; i < M; i++) {
//         for (int j = 0; j < N; j++) {
//             cin >> matrixB[i][j];
//         }
//     }
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             for (int k = 0; k < M; k++) {
//                 result[i][j] += matrixA[i][k] * matrixB[k][j];
//             }
//         }
//     }
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//
// //Problem 7
//
// int main() {
//     int N;
//     cin >> N;
//     int matrix[N][N];
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             cin >> matrix[i][j];
//         }
//     }
//     for (int i = 0; i < N; i++) {
//         for (int j = N - 1; j >= 0; j--) {
//             cout << matrix[j][i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
