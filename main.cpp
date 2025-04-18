#include <iostream>
using namespace std;

int main() {
    for (int i = 100; i <= 999; i++) {
        int a = i / 100;        // первая цифра
        int b = (i / 10) % 10;  // вторая цифра
        int c = i % 10;         // третья цифра

        // Проверка, что цифры различны
        if (a != b && b != c && a != c) {
            int sum = a + b + c; // сумма цифр
            int square = sum * sum; // квадрат суммы

            // Проверка делимости числа на квадрат суммы
            if (i % square == 0) {
                cout << i << endl;
            }
        }
    }
    return 0;
}
