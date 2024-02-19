#include <iostream>
#include <string>
#include <Windows.h>

const int ROWS = 3;
const int COLS = 5;

int main() {

    SetConsoleCP(1251);
    setlocale(0, "");
    double arr[ROWS][COLS];

    std::cout << "Введите элементы массива " << ROWS << "x" << COLS << ":\n";
    for (int i = 0; i < ROWS; ++i) {
        std::cout << "Строка " << i + 1 << ":\n";
        for (int j = 0; j < COLS; ++j) {
            std::cout << "Элемент " << j + 1 << ": ";
            std::cin >> arr[i][j];
        }
    }

    std::cout << "\nСредние арифметические для каждой строки:\n";
    for (int i = 0; i < ROWS; ++i) {
        double sum = 0;
        for (int j = 0; j < COLS; ++j) {
            sum += arr[i][j];
        }
        double average = sum / COLS;
        std::cout << "Строка " << i + 1 << ": " << average << std::endl;
    }

    return 0;
}
