#include <windows.h>
#include <iostream>
using namespace std;

// Функція для знаходження мінімального елемента неголовної діагоналі
int minSecondaryDiagonal(int A[5][5]) {
    int min = A[0][4]; // перший елемент побічної діагоналі

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            // Умова побічної діагоналі
            if (i + j == 4) {
                if (A[i][j] < min) {
                    min = A[i][j];
                }
            }

        }
    }
    return min;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A[5][5];

    cout << "Введіть елементи матриці 5x5:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    // Виклик функції
    int min = minSecondaryDiagonal(A);

    // Виведення результату
    cout << "\nМінімальний елемент неголовної діагоналі: " << min << endl;

    return 0;
}
