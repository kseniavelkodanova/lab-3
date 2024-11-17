#include <iostream>
using namespace std;

// If13. 
// Дано три числа. Знайти середнє з них 
// (тобто число, розташоване між найменшим і найбільшим).

int main() {
    int a, b, c;

    // Введення трьох чисел
    cout << "Введіть три числа: ";
    cin >> a >> b >> c;

    int middle;

    // Логіка для знаходження середнього числа
    if ((a > b && a < c) || (a < b && a > c)) {
        middle = a;
    } else if ((b > a && b < c) || (b < a && b > c)) {
        middle = b;
    } else {
        middle = c;
    }

    // Виведення результату
    cout << "Середнє число: " << middle << endl;

    return 0;
}
